using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using DG.Tweening;

public class NotesSlide : MonoBehaviour
{
    //出現場所となるオブジェクト
    [SerializeField] private GameObject generatePos;
    [SerializeField] private GameObject origin;

    [Header("移動先。それぞれにDestinaitonのタグをつける必要あり")]
    [SerializeField] private GameObject[] destinations = new GameObject[2];
    private Vector3[] notesPath = new Vector3[3]; //ノーツの移動経路(0:出現場所, 1:中継地点, 2:目的地)

    private void Start()
    {
        //最初の出現場所
        generatePos = GameObject.Find("GenerationPoint");

        origin = GameObject.Find("Origin");

        GameObject[] targets = GameObject.FindGameObjectsWithTag("Destination");
        if(targets.Length != 2)
        {
            Debug.LogError("Destinationタグが付いたオブジェクトは" + targets.Length + "つである必要があります。目的地に設定しているオブジェクトを確認してください。");
            Destroy(this.gameObject);
        }
        else
        {
            destinations = targets;
        }

        //ノーツの移動経路を設定
        notesPath[0] = generatePos.transform.position;

        notesPath[1] = origin.transform.position;

        notesPath[2] = (Random.Range(0,2) == 0) ? destinations[0].transform.position : destinations[1].transform.position;

        //DOTWEENで移動させる。
        transform.DOPath(
            notesPath,
            7.0f
        );
        
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
