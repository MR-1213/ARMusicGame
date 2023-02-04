using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotesSlide : MonoBehaviour
{
    float generatedTime = 0f;
    private void FixedUpdate()
    {
        //トランスフォームの取得
        Transform myTransform = this.transform;
        //座標の取得
        Vector3 pos = myTransform.position;
        //y方向の速度
        pos.y -= 0.08f;
        //座標の設定
        myTransform.position = pos;
    }

    private void OnTriggerEnter(Collider col)
    {
        //"resetbox"タグに衝突した場合
        if(col.gameObject.tag == "resetbox")
        {
            //オブジェクトが消える
            Destroy(this.gameObject);
        }
    }
}
