using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ObjectRotation : MonoBehaviour
{
    private void Start() 
    {
        StartCoroutine(RotateObject());
    }

    IEnumerator RotateObject()
    {
        while(true)
        {
            yield return new WaitForSeconds(5.0f);

            this.transform.DORotate(new Vector3(0, 360, 0), 3.0f, RotateMode.WorldAxisAdd);
        }
    }
}