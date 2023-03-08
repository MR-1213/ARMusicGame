using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundFlashingController : MonoBehaviour
{
    [SerializeField] private GameObject[] roads;
    private bool isEnd = false;

    public void FlashingStart()
    {
        isEnd = false;
        StartCoroutine(RoadFlashing());
    }

    public void FlashingStop()
    {
        isEnd = true;
    }

    IEnumerator RoadFlashing()
    {
        while(true)
        {
            if(isEnd)
            {
                foreach(GameObject road in roads)
                {
                    road.SetActive(false);
                }
                yield break;
            }

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
