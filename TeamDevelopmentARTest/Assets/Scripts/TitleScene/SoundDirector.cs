using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundDirector : MonoBehaviour
{
    public static SoundDirector instance;

    [SerializeField] private AudioSource audioBGM;
    [SerializeField] private AudioSource audioSE;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

    }

    public void PlayBGM(AudioClip clip)
    {
        StopBGM();
        audioBGM.clip = clip;
        if(clip == null)
        {
            return;
        }

        audioBGM.Play();
    }

    public void PlaySE(AudioClip clip)
    {
        audioSE.clip = clip;
        if(clip == null)
        {
            return;
        }

        audioSE.PlayOneShot(clip);
    }

    public void StopBGM()
    {
        audioBGM.Stop();
    }

    public void ChangeMusicLoopFalse()
    {
        audioBGM.loop = false;
    }

    public bool isPlaying()
    {
        if(SceneManager.GetActiveScene().name == "Main")
        {
            return audioBGM.isPlaying;
        }
        else
        {
            return true;
        }
    }
}
