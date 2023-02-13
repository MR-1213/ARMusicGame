using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using DG.Tweening;

public class NotesMoveController : MonoBehaviour
{
    [SerializeField] private List<GameObject> pathPoints;

    private void Start() 
    {
        pathPoints.Add(GameObject.Find("Point1"));
        pathPoints.Add(GameObject.Find("Point2"));
        pathPoints.Add(GameObject.Find("Point3"));
        pathPoints.Add(GameObject.Find("Point4"));
        pathPoints.Add(GameObject.Find("Point5"));

        transform.DOPath(
            pathPoints.Select(target => target.transform.position).ToArray(),
            10.0f,
            PathType.CatmullRom
        )
        .SetLookAt(0.05f, Vector3.forward)
        .OnComplete(() => Destroy(this.gameObject));
    }
}
