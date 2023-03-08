using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GamePlayManager : MonoBehaviour
{

    [Header("DecorationObjects/BackRhythmObjectsのオブジェクト群")]
    [SerializeField] private RhythmObject[] rhythmObjects = new RhythmObject[6];
    
    [Header("Playのテキストオブジェクト(スタートのトリガー)")]
    [SerializeField] private GameObject startPlayObj;

    [Header("TapLines")]
    [SerializeField] private GameObject[] tapLines;

    [Header("ResetBoxes")]
    [SerializeField] private GameObject[] resetBoxes;

    [Header("スコアスライダー")]
    [SerializeField] private GameObject scoreSlider;
    [Header("ゲーム音楽")]
    [SerializeField] private AudioClip GameBGMClip;
    private NotesGenerator notesGenerator;
    private HoleGenerateController holeGenerateController;
    private BackGroundFlashingController backGroundFlashingController;

    private void Start() 
    {
        notesGenerator = GetComponent<NotesGenerator>();
        holeGenerateController = GetComponent<HoleGenerateController>();
        backGroundFlashingController = GetComponent<BackGroundFlashingController>();    
        DOTween.SetTweensCapacity(200, 125);
    }

    private void Update() 
    {
        if(!SoundDirector.instance.isPlaying())
        {
            GameEnd();
        }
    }
    
    /// <summary>
    /// ゲームをスタートさせるときに行う処理
    /// </summary>
    public void GameStart()
    {
        startPlayObj.SetActive(false);
        notesGenerator.OnStartButton();
        SoundDirector.instance.PlayBGM(GameBGMClip);
        SoundDirector.instance.ChangeMusicLoopFalse();
        holeGenerateController.GenerateHole();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(true);
        }

        foreach(GameObject tapline in tapLines)
        {
            tapline.SetActive(true);
        }

        foreach(GameObject resetbox in resetBoxes)
        {
            resetbox.SetActive(true);
        }

        backGroundFlashingController.FlashingStart();
        scoreSlider.SetActive(true);
    }

    /// <summary>
    /// ゲームを終了させるときに行う処理
    /// </summary>
    private void GameEnd()
    {
        notesGenerator.OnEndButton();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(false);
        }

        foreach(GameObject tapline in tapLines)
        {
            tapline.SetActive(false);
        }

        backGroundFlashingController.FlashingStop();
        scoreSlider.SetActive(false);

        DOVirtual.DelayedCall(6.0f, () => DelayedCallMethod());

        startPlayObj.SetActive(true);
    }

    private void DelayedCallMethod()
    {
        foreach(GameObject resetbox in resetBoxes)
        {
            resetbox.SetActive(false);
        }
    }
}
