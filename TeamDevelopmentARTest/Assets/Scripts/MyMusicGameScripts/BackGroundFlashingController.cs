using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundFlashingController : MonoBehaviour
{
    [SerializeField] private GameObject[] roads;

    public void FlashingStart()
    {
        StartCoroutine(RoadFlashing());
    }

    public void FlashingStop()
    {
        StopCoroutine(RoadFlashing());
    }

    IEnumerator RoadFlashing()
    {
        while(true)
        {
            for(int i = 0; i < roads.Length - 1; i++)
            {
                roads[i].SetActive(false);
                roads[i+1].SetActive(true);

                yield return new WaitForSeconds(2.0f);
            }

            roads[roads.Length-1].SetActive(false);
            roads[0].SetActive(true);

            yield return new WaitForSeconds(2.0f);
        }
    }
}
