using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ObjectChangeScale : MonoBehaviour
{
    private void Start()
    {
        transform.DOScale(new Vector3(2, 2, 2), 2.0f).SetLoops(-1, LoopType.Yoyo);
    }
    
}
