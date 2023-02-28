using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleManager : MonoBehaviour
{
    [SerializeField] private SoundDirector soundDirector;
    [SerializeField] private AudioClip BGMclip;
    private void Start()
    {
        SoundDirector.instance.PlayBGM(BGMclip);
    }

}
