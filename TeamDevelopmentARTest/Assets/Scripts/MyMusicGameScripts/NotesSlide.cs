using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using DG.Tweening;

public class NotesSlide : MonoBehaviour
{
    [Header("出現場所。それぞれにOriginのタグをつける必要あり")]
    public GameObject[] origins = new GameObject[4];
    [Header("移動先。それぞれにDestinaitonのタグをつける必要あり")]
    public GameObject[] destinations = new GameObject[8];
    private Vector3[] originAndDestination = new Vector3[2];

    private void Start()
    {
        GameObject[] temp = GameObject.FindGameObjectsWithTag("Origin");
        if(temp.Length > 4)
        {
            Debug.LogError("Originタグが付いたオブジェクトが5つ以上あります。4つ以下にしてください。");
            Destroy(this.gameObject);
        }
        else
        {
            origins = temp;
        }

        temp = GameObject.FindGameObjectsWithTag("Destination");
        if(temp.Length > 8)
        {
            Debug.LogError("Destinationタグが付いたオブジェクトが9つ以上あります。8つ以下にしてください。");
            Destroy(this.gameObject);
        }
        else
        {
            destinations = temp;
        }

        string targetOriginName;
        string targetDestinationName;

        Debug.Log(this.gameObject.name);
        string thisGameObjectName = this.gameObject.name;
        string fixedName = thisGameObjectName.Replace("(Clone)", "");
        Debug.Log(fixedName);

        switch(fixedName)
        {
            case "B_MusicSphereOrange":
                targetOriginName = "Orange";
                targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftOrange" : "RightOrange";
                break;
            case "B_MusicSphereBlue":
                targetOriginName = "Blue";
                targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftBlue" : "RightBlue";
                break;
            case "B_MusicSphereGreen":
                targetOriginName = "Green";
                targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftGreen" : "RightGreen";
                break;
            case "B_MusicSpherePink":
                targetOriginName = "Pink";
                targetDestinationName = (Random.Range(0, 2) == 0) ? "LeftPink" : "RightPink";
                break;
            default:
                targetOriginName = "Error";
                targetDestinationName = "Error";
                break;
        }

        if(targetOriginName == "Error" || targetDestinationName == "Error")
        {
            Debug.LogError("ノーツの名前、もしくはOrigin,Destinaionのいずれかの名前が不適切です。");
            Destroy(this.gameObject);
        }

        foreach(GameObject origin in origins)
        {
            if(origin.name == targetOriginName) originAndDestination[0] = origin.transform.position;
        }
        foreach(GameObject destination in destinations)
        {
            if(destination.name == targetDestinationName) originAndDestination[1] = destination.transform.position;
        }

        transform.DOPath(
            originAndDestination,
            5.0f
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
