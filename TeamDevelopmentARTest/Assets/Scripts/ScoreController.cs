using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour
{
    [SerializeField] private Slider scoreSlider;

    private void Start() 
    {
        scoreSlider.value = 0;
        scoreSlider.gameObject.SetActive(false);
    }

    public void GetScore()
    {
        scoreSlider.value += 0.008f;
    }
}
