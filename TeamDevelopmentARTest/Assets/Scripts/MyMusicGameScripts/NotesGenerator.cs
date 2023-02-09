using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotesGenerator : MonoBehaviour
{
    public RhythmObject[] rhythmObject = new RhythmObject[3];
    [SerializeField] private GameObject gameQuad;
    [SerializeField] private GameObject roadOrange;
    [SerializeField] private GameObject roadBlue;
    [SerializeField] private GameObject roadGreen;
    [SerializeField] private GameObject roadPink;

    [SerializeField] private GameObject notesPink;
    [SerializeField] private GameObject notesGreen;
    [SerializeField] private GameObject notesBlue;
    [SerializeField] private GameObject notesOrange;

    public GameObject endButton;
    private AudioSource audioSource;

    private bool isActive = false;

    private void Start()
    {
        endButton.SetActive(false);
        audioSource = GetComponent<AudioSource>();
        StartCoroutine(GetRondomNum());
    }

    public void OnStartButton()
    {
        isActive = true;
        endButton.SetActive(true);
        audioSource.Play();
        for(int i = 0; i < rhythmObject.Length; i++)
        {
            rhythmObject[i].IsActive(true);
        }
    }

    public void OnEndButton()
    {
        isActive = false;
        audioSource.Stop();
        endButton.SetActive(false);
        for(int i = 0; i < rhythmObject.Length; i++)
        {
            rhythmObject[i].IsActive(false);
        }
    }

    private void GenerateNotes(int num)
    {
        if(!(0 <= num && num <= 4))
        {
            Debug.LogError("0~4の値で指定してください");
            return;
        }

        switch(num)
        {
            case 0:
                Instantiate(notesOrange, roadOrange.transform.position, Quaternion.Euler(180f, 14.851f, 0f), gameQuad.transform);
                break;
            case 1:
                Instantiate(notesBlue, roadBlue.transform.position, Quaternion.identity, gameQuad.transform);
                break;
            case 2:
                Instantiate(notesGreen, roadGreen.transform.position, Quaternion.identity, gameQuad.transform);
                break;
            case 3:
                Instantiate(notesPink, roadPink.transform.position, Quaternion.identity, gameQuad.transform);
                break;
            case 4:
                break; //StartButtonを押すまで何も生成しない。
        }

        return;
    }

    IEnumerator GetRondomNum()
    {
        while(true)
        {
            yield return new WaitForSeconds(2.0f);
            int num;
            if(isActive)
            {
                num = Random.Range(0, 4);
            }
            else
            {
                num = 4;
            }
            
            GenerateNotes(num);
        }
    }
}
