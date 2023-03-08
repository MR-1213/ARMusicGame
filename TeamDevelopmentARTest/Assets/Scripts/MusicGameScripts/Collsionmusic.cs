using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collsionmusic : MonoBehaviour
{
     //音データの再生装置を格納する
    private AudioSource audioSource;
    private ScoreController scoreController;
    //音データを格納する
    [SerializeField]
    private AudioClip sound;
    private void Start()
    {
        //コンポーネントから再生装置を検出する
        audioSource = gameObject.AddComponent<AudioSource>();

        GameObject scoreManager = GameObject.Find("ScoreManager");
        scoreController = scoreManager.GetComponent<ScoreController>();
    }
    //衝突したとき
    private void OnTriggerEnter(Collider col)
    {
        //"TapLine"タグがついているオブジェクトに衝突した場合
        if (col.gameObject.tag == "TapLine")
        {
            //音を鳴らす
            audioSource.PlayOneShot(sound);
            //0.008ポイント増加させる
            scoreController.GetScore();
            //0.2秒後にオブジェクトが消える
            Destroy(gameObject, 0.2f);
        }
    }
}
