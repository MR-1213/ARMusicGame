// <copyright file="GeospatialController.cs" company="Google LLC">
//
// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------

namespace Google.XR.ARCoreExtensions.Samples.Geospatial
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;
    using UnityEngine.Android;
    using UnityEngine.EventSystems;
    using UnityEngine.UI;
    using UnityEngine.XR.ARFoundation;
    using UnityEngine.XR.ARSubsystems;


    public class GeospatialController : MonoBehaviour
    {
        [Header("AR Components")]

        public ARSessionOrigin SessionOrigin;

        public ARSession Session;

        public ARAnchorManager AnchorManager;

        public ARRaycastManager RaycastManager;

        public AREarthManager EarthManager;

        public ARCoreExtensions ARCoreExtensions;


        [Header("UI Elements")]

        /// <summary>
        /// Help message shows while localizing.
        /// </summary>
        private const string _localizingMessage = "Localizing your device to set anchor.";

        /// <summary>
        /// Help message shows while initializing Geospatial functionalities.
        /// </summary>
        private const string _localizationInitializingMessage =
            "Initializing Geospatial functionalities.";

        /// <summary>
        /// Help message shows when <see cref="AREarthManager.EarthTrackingState"/> is not tracking
        /// or the pose accuracies are beyond thresholds.
        /// </summary>
        private const string _localizationInstructionMessage =
            "Point your camera at buildings, stores, and signs near you.";

        /// <summary>
        /// Help message shows when location fails or hits timeout.
        /// </summary>
        private const string _localizationFailureMessage =
            "Localization not possible.\n" +
            "Close and open the app to restart the session.";

        /// <summary>
        /// Help message shows when location success.
        /// </summary>
        private const string _localizationSuccessMessage = "Localization completed.";

        /// <summary>
        /// Help message shows when resolving takes too long.
        /// </summary>
        private const string _resolvingTimeoutMessage =
            "Still resolving the terrain anchor.\n" +
            "Please make sure you're in an area that has VPS coverage.";

        /// <summary>
        /// The timeout period waiting for localization to be completed.
        /// </summary>
        private const float _timeoutSeconds = 180;

        /// <summary>
        /// Accuracy threshold for heading degree that can be treated as localization completed.
        /// </summary>
        private const double _headingAccuracyThreshold = 25;

        /// <summary>
        /// Accuracy threshold for altitude and longitude that can be treated as localization
        /// completed.
        /// </summary>
        private const double _horizontalAccuracyThreshold = 20;

        private bool waitingForLocationService = false;
        private bool isInARView = false;
        private bool isReturning = false;
        private bool isLocalizing = false;
        private bool enablingGeospatial = false;

        //private bool _usingTerrainAnchor = false;
        private float localizationPassedTime = 0f;
        private float _configurePrepareTime = 3f;
        private List<GameObject> _anchorObjects = new List<GameObject>();
        /// <summary>
        /// StartLocationService()を管理するIEnumerator型の変数
        /// </summary>
        private IEnumerator startLocationService = null;

        /// <summary>
        /// AvailabilityCheck()を管理するIEnumerator型の変数
        /// </summary>
        private IEnumerator asyncCheck = null;

        //ロードしたデータを保存しておくリスト(データの型はGeospatialAnchorHistory)
        //private GeospatialAnchorHistoryCollection historyCollection = new GeospatialAnchorHistoryCollection();
        //保存時に新たにFirebaseに保存される緯度経度高度方位と画像
        //private GeospatialAnchorHistory newHistory;

        /// <summary>
        /// 起動後最初に1回だけ実行する
        /// </summary>
        public void Awake()
        {
            // Lock screen to portrait.
            Screen.autorotateToLandscapeLeft = false;
            Screen.autorotateToLandscapeRight = false;
            Screen.autorotateToPortraitUpsideDown = false;
            Screen.orientation = ScreenOrientation.Portrait;

            // Enable geospatial sample to target 60fps camera capture frame rate
            // on supported devices.
            // Note, Application.targetFrameRate is ignored when QualitySettings.vSyncCount != 0.
            Application.targetFrameRate = 60;

            if (SessionOrigin == null)
            {
                Debug.LogError("ARSessionOriginがnullです.");
            }

            if (Session == null)
            {
                Debug.LogError("ARSessionがnullです.");
            }

            if (ARCoreExtensions == null)
            {
                Debug.LogError("ARCoreExtensionsがnullです.");
            }

        }

        /// <summary>
        /// アタッチされたオブジェクトが有効になるたびに実行する。初回はAwake()より後に実行する。
        /// </summary>
        public void OnEnable()
        {
            //ロケーションサービスをスタート
            startLocationService = StartLocationService();
            StartCoroutine(startLocationService);

            isReturning = false;
            enablingGeospatial = false;
            localizationPassedTime = 0f;
            isLocalizing = true;

            SwitchToARView(true);
        }

        /// <summary>
        /// アタッチされたオブジェクトが無効になるたびに実行する。
        /// </summary>
        public void OnDisable()
        {
            //各機能の利用状況の確認を停止する
            StopCoroutine(asyncCheck);
            asyncCheck = null;
            //ロケーションサービスの起動を停止する
            StopCoroutine(startLocationService);
            startLocationService = null;

            Debug.Log("ロケーションサービスをストップします");
            Input.location.Stop();

            foreach (var anchor in _anchorObjects)
            {
                Destroy(anchor);
            }

            _anchorObjects.Clear();
        }

        public void Update()
        {
            if (!isInARView)
            {
                return;
            }

            // Check session error status.
            LifecycleUpdate();
            if (isReturning)
            {
                return;
            }

            if (ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                return;
            }

            // Check feature support and enable Geospatial API when it's supported.
            // 端末がGeospatialAPIの機能をサポートしているかどうか
            var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
            switch (featureSupport)
            {
                case FeatureSupported.Unknown:
                    return;
                case FeatureSupported.Unsupported:
                    //ReturnWithReason("Geospatial API is not supported by this devices.");
                    return;
                case FeatureSupported.Supported:
                    if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
                        GeospatialMode.Disabled)
                    {
                        Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
                        ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
                            GeospatialMode.Enabled;
                        _configurePrepareTime = 3.0f;
                        enablingGeospatial = true;
                        return;
                    }

                    break;
            }

            // Waiting for new configuration taking effect.
            if (enablingGeospatial)
            {
                _configurePrepareTime -= Time.deltaTime;
                if (_configurePrepareTime < 0)
                {
                    enablingGeospatial = false;
                }
                else
                {
                    return;
                }
            }

            // Check earth state.
            var earthState = EarthManager.EarthState;
            if (earthState == EarthState.ErrorEarthNotReady)
            {
                //SnackBarText.text = _localizationInitializingMessage;
                return;
            }
            else if (earthState != EarthState.Enabled)
            {
                string errorMessage =
                    "Geospatial sample encountered an EarthState error: " + earthState;
                Debug.LogWarning(errorMessage);
                //SnackBarText.text = errorMessage;
                return;
            }

            // Check earth localization.
            bool isSessionReady = ARSession.state == ARSessionState.SessionTracking &&
                Input.location.status == LocationServiceStatus.Running;
            var earthTrackingState = EarthManager.EarthTrackingState; 
            var pose = earthTrackingState == TrackingState.Tracking ? 
                EarthManager.CameraGeospatialPose : new GeospatialPose();
            
            // Threshold:閾値 事前に設定した閾値以上では精度が低いためLost localizationとする
            if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
                pose.HeadingAccuracy > _headingAccuracyThreshold ||
                pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
            {
                // Lost localization during the session.
                if (!isLocalizing)
                {
                    isLocalizing = true;
                    localizationPassedTime = 0f;
                    //SetPaintingButton.gameObject.SetActive(false);
                    //SaveButton.gameObject.SetActive(false);
                    foreach (var go in _anchorObjects)
                    {
                        go.SetActive(false);
                    }
                }

                if (localizationPassedTime > _timeoutSeconds)
                {
                    Debug.LogError("Geospatial sample localization passed timeout.");
                    //ReturnWithReason(_localizationFailureMessage);
                }
                else
                {
                    localizationPassedTime += Time.deltaTime;
                    //SnackBarText.text = _localizationInstructionMessage;
                }
            }
            else if (isLocalizing)
            {
                // Finished localization.
                isLocalizing = false;
                localizationPassedTime = 0f;
                //SetPaintingButton.gameObject.SetActive(true);
                //SaveButton.gameObject.SetActive(true);
                //SnackBarText.text = _localizationSuccessMessage;
                foreach (var go in _anchorObjects)
                {
                    var terrainState = go.GetComponent<ARGeospatialAnchor>().terrainAnchorState;
                    if (terrainState != TerrainAnchorState.None &&
                        terrainState != TerrainAnchorState.Success)
                    {
                        // Skip terrain anchors that are still waiting for resolving
                        // or failed on resolving.
                        continue;
                    }

                    go.SetActive(true);
                }

                //ResolveHistory();
            }
            else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began
                && !EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
            {
                //EventSystem.current.IsPointerOverGameObject : uGUI操作中であればtrueになる。引数はスマホ等では必要
                // Set anchor on screen tap.
                PlaceAnchorByScreenTap(Input.GetTouch(0).position);
            }

            //InfoPanel.SetActive(true);
        }

        private IEnumerator CheckTerrainAnchorState(ARGeospatialAnchor anchor)
        {
            if (anchor == null || _anchorObjects == null)
            {
                yield break;
            }

            int retry = 0;
            while (anchor.terrainAnchorState == TerrainAnchorState.TaskInProgress)
            {
                if (_anchorObjects.Count == 0 || !_anchorObjects.Contains(anchor.gameObject))
                {
                    Debug.LogFormat(
                        "{0} has been removed, exist terrain anchor state check.",
                        anchor.trackableId);
                    yield break;
                }

                if (retry == 100 && _anchorObjects.Last().Equals(anchor.gameObject))
                {
                    //SnackBarText.text = _resolvingTimeoutMessage;
                }

                yield return new WaitForSeconds(0.1f);
                retry = Math.Min(retry + 1, 100);
            }

            anchor.gameObject.SetActive(
                !isLocalizing && anchor.terrainAnchorState == TerrainAnchorState.Success);
            if (_anchorObjects.Last().Equals(anchor.gameObject))
            {
                //SnackBarText.text = $"Terrain Anchor State: {anchor.terrainAnchorState}";
            }

            yield break;
        }

        private void PlaceAnchorByScreenTap(Vector2 position)
        {
            List<ARRaycastHit> hitResults = new List<ARRaycastHit>();
            RaycastManager.Raycast(
                position, hitResults, TrackableType.Planes | TrackableType.FeaturePoint);
            if (hitResults.Count > 0)
            {
                GeospatialPose geospatialPose = EarthManager.Convert(hitResults[0].pose);
                var myPose = EarthManager.CameraGeospatialPose;
                /*
                GeospatialAnchorHistory history = new GeospatialAnchorHistory(
                    geospatialPose.Latitude, geospatialPose.Longitude, geospatialPose.Altitude,
                    myPose.Heading); 

                var anchor = PlaceGeospatialAnchor(history, _usingTerrainAnchor);
                */

            }
        }

        /*
        private void PlaceGeospatialAnchor(GeospatialAnchorHistory history)
        {
            var anchor = AnchorManager.AddAnchor(history.Latitude, history.Longitude, history.Altitude, history.Heading);
                
            if (anchor != null)
            {
                GameObject PaintQuad = Instantiate(QuadPrefab, anchor.transform);
                PaintQuad.GetComponent<Renderer>().material.mainTexture = history.Texture;
                _anchorObjects.Add(anchor.gameObject);
                anchor.gameObject.SetActive(true);
                PaintQuad.gameObject.SetActive(true);

                //SnackBarText.text = $"{_anchorObjects.Count} Anchor(s) Set!";
            }
            else
            {
                SnackBarText.text = string.Format(
                    "Failed to set {0}!", "an anchor");
            }
        }
        */

        /*
        public void SetHistory(float latitude, float longitude, float altitude, Quaternion quaternion, Texture2D texture)
        {
            GeospatialAnchorHistory history = new GeospatialAnchorHistory(latitude, longitude, altitude, quaternion, texture);
            historyCollection.Collection.Add(history);
        }
        */

        /*
        private void ResolveHistory()
        {
            if(!(historyCollection.Collection.Count > 0))
            {
                Debug.Log("hitoryCollectionに何も入っていません");
                return;
            }
            foreach(var history in historyCollection.Collection)
            {
                var anchor = AnchorManager.AddAnchor(history.Latitude, history.Longitude, history.Altitude, history.Heading);
                GameObject PaintQuad = Instantiate(QuadPrefab, anchor.transform);
                Material _Canvasmaterial = new Material(PaintQuad.GetComponent<Renderer>().material);
                _Canvasmaterial.mainTexture = history.Texture;
                PaintQuad.GetComponent<Renderer>().material = _Canvasmaterial;
                anchor.gameObject.SetActive(true);
                PaintQuad.SetActive(true);
                _anchorObjects.Add(anchor.gameObject);
                Debug.Log(PaintQuad.transform.position);
            }
            
        }
        */

        
        /* セーブ機能関連 */
        /* 「画像を設置」ボタンを押すことで押した瞬間でのカメラの位置を取得、paintTextureとともに一時保存、画像の設置を行う */
        /*
        public void On//SetPaintingButton()
        {
            var pose = EarthManager.CameraGeospatialPose;
            Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);
            newHistory = new GeospatialAnchorHistory(pose.Latitude, pose.Longitude, pose.Altitude, quaternion, paintTexture);
            PlaceGeospatialAnchor(newHistory);
            SetObjectLocation(newHistory);
            isSetPainting = true;
            //SetPaintingButton.gameObject.SetActive(false);
        }
        */
        

        /* セーブ機能関連 */
        /* セーブボタンを押すことでFirebaseにnewHistoryの情報を保存する */
        /*
        public void OnSaveButton(Texture2D paintTexture)
        {
            
            Dictionary<string, object> coordinateDatas = new Dictionary<string, object> {
                    
                {"latitude", 0},
                {"longitude", 0},
                {"altitude", 0},
            };
            var pose = EarthManager.CameraGeospatialPose;
            Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);
            newHistory = new GeospatialAnchorHistory(pose.Latitude, pose.Longitude, pose.Altitude, quaternion, paintTexture);
            
            coordinateDatas["latitude"] = newHistory.Latitude;
            coordinateDatas["longitude"] = newHistory.Longitude;
            coordinateDatas["altitude"] = newHistory.Altitude;

            Debug.Log(coordinateDatas["latitude"]);
            Debug.Log(coordinateDatas["longitude"]);
            Debug.Log(coordinateDatas["altitude"]);
            Debug.Log(newHistory.Heading.ToString());

            //changeimage.SaveImageAndPath(coordinateDatas, newHistory.Heading, newHistory.Texture);
        }
        */
        
        /// <summary>
        /// enable=true : ARの画面に移行 / enable=false : ARの画面を停止
        /// </summary>
        /// <param name="enable"></param>
        private void SwitchToARView(bool enable)
        {
            isInARView = enable;

            SessionOrigin.gameObject.SetActive(enable);
            Session.gameObject.SetActive(enable);
            ARCoreExtensions.gameObject.SetActive(enable);

            //各機能の利用可能状況を確認する
            if (enable && asyncCheck == null)
            {
                asyncCheck = AvailabilityCheck();
                StartCoroutine(asyncCheck);
            }
        }

        /// <summary>
        /// ARSession.state/の利用可能状況を確認する
        /// </summary>
        /// <returns></returns>
        private IEnumerator AvailabilityCheck()
        {
            if (ARSession.state == ARSessionState.None)
            {
                yield return ARSession.CheckAvailability();
            }

            //ARSessionState.CheckingAvailabilityのために1フレーム停止させ、次のフレームから開始する
            yield return null;

            if (ARSession.state == ARSessionState.NeedsInstall)
            {
                yield return ARSession.Install();
            }

            //ARSessionState.Installingのために1フレーム停止させ、次のフレームから開始する
            yield return null;

#if UNITY_ANDROID
            //カメラを利用できるかを確認する
            if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
            {
                Debug.Log("カメラの利用許可をリクエスト");
                Permission.RequestUserPermission(Permission.Camera);
                yield return new WaitForSeconds(3.0f);
            }

            //カメラの許可のリクエストから3秒待ち、もう一度カメラが利用できるかを確認する
            if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
            {
                // User has denied the request.
                Debug.LogWarning(
                    "Failed to get camera permission. VPS availability check is not available.");
                yield break;
            }
#endif

            //ロケーションサービスの起動ができるまで待機
            while (waitingForLocationService)
            {
                yield return null;
            }

            if (Input.location.status != LocationServiceStatus.Running)
            {
                Debug.LogWarning(
                    "Location service is not running. VPS availability check is not available.");
                yield break;
            }

            // Update event is executed before coroutines so it checks the latest error states.
            if (isReturning)
            {
                yield break;
            }

            var location = Input.location.lastData;
            var vpsAvailabilityPromise =
                AREarthManager.CheckVpsAvailability(location.latitude, location.longitude);
            yield return vpsAvailabilityPromise;

            Debug.LogFormat("VPS Availability at ({0}, {1}): {2}", location.latitude, location.longitude, vpsAvailabilityPromise.Result);
            //VPSCheckCanvas.SetActive(vpsAvailabilityPromise.Result != VpsAvailability.Available);
        }

        /// <summary>
        /// ロケーションサービスを起動する
        /// </summary>
        /// <returns></returns>
        private IEnumerator StartLocationService()
        {
            //準備できるまでtrueにする
            waitingForLocationService = true;
#if UNITY_ANDROID
            //位置情報を利用できるかを確認する
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Debug.Log("位置情報の利用をリクエスト");
                Permission.RequestUserPermission(Permission.FineLocation);
                yield return new WaitForSeconds(3.0f);
            }
#endif
            //位置情報の利用が拒否されたとき
            if (!Input.location.isEnabledByUser)
            {
                Debug.Log("ユーザーによって位置情報の利用が許可されませんでした");
                waitingForLocationService = false;
                yield break;
            }

            Debug.Log("ロケーションサービスをスタートします");
            Input.location.Start();

            while (Input.location.status == LocationServiceStatus.Initializing)
            {
                yield return null;
            }

            waitingForLocationService = false; //ロケーションサービスが起動したのでfalseに

            //ロケーションサービスが停止した時
            if (Input.location.status != LocationServiceStatus.Running)
            {
                Debug.LogWarningFormat(
                    "Location service ends with {0} status.", Input.location.status);
                Input.location.Stop();
            }

        }

        private void LifecycleUpdate()
        {
            // Pressing 'back' button quits the app.
            if (Input.GetKeyUp(KeyCode.Escape))
            {
                Application.Quit();
            }

            if (isReturning)
            {
                return;
            }

            // Only allow the screen to sleep when not tracking.
            var sleepTimeout = SleepTimeout.NeverSleep;
            if (ARSession.state != ARSessionState.SessionTracking)
            {
                sleepTimeout = SleepTimeout.SystemSetting;
            }

            Screen.sleepTimeout = sleepTimeout;

            // Quit the app if ARSession is in an error status.
            string returningReason = string.Empty;
            if (ARSession.state != ARSessionState.CheckingAvailability &&
                ARSession.state != ARSessionState.Ready &&
                ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                returningReason = string.Format(
                    "Geospatial sample encountered an ARSession error state {0}.\n" +
                    "Please start the app again.",
                    ARSession.state);
            }
            else if (Input.location.status == LocationServiceStatus.Failed)
            {
                returningReason =
                    "Geospatial sample failed to start location service.\n" +
                    "Please start the app again and grant precise location permission.";
            }
            else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
            {
                returningReason = string.Format(
                    "Geospatial sample failed with missing AR Components.");
            }

            //ReturnWithReason(returningReason);
        }

        /*
        private void ReturnWithReason(string reason)
        {
            if (string.IsNullOrEmpty(reason))
            {
                return;
            }

            //SetPaintingButton.gameObject.SetActive(false);

            Debug.LogError(reason);
            SnackBarText.text = reason;
        }
        */
        /*
        private void QuitApplication()
        {
            Application.Quit();
        }
        */
    }
}
