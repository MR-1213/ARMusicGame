using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Collsionmusic : MonoBehaviour
{
     //音データの再生装置を格納する
    private AudioSource audioSource;
    private Slider scoreSlider;
    //音データを格納する
    [SerializeField]
    private AudioClip sound;
    private void Start()
    {
        //コンポーネントから再生装置を検出する
        audioSource = gameObject.AddComponent<AudioSource>();

        GameObject scoreSliderObj = GameObject.Find("Score");
        scoreSlider = scoreSliderObj.GetComponent<Slider>();
        scoreSlider.value = 0;
        scoreSliderObj.SetActive(false);
    }
    //衝突したとき
    private void OnTriggerEnter(Collider col)
    {
        //"TapLine"タグがついているオブジェクトに衝突した場合
        if (col.gameObject.tag == "TapLine")
        {
            //音を鳴らす
            audioSource.PlayOneShot(sound);
            //0.008ポイント増加
            scoreSlider.value += 0.008f;
            //0.2秒後にオブジェクトが消える
            Destroy(gameObject, 0.2f);
        }
    }
}
