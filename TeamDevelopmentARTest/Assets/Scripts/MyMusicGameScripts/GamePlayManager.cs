using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GamePlayManager : MonoBehaviour
{

    [Header("DecorationObjects/BackRhythmObjectsのオブジェクト群")]
    [SerializeField] private RhythmObject[] rhythmObjects = new RhythmObject[6];
    [Header("スコアスライダー")]
    [SerializeField] private GameObject scoreSlider;
    [Header("ゲーム音楽")]
    [SerializeField] private AudioClip GameBGMClip;
    private NotesGenerator notesGenerator;
    private HoleGenerateController holeGenerateController;
    private BackGroundFlashingController backGroundFlashingController;

    private void Start() 
    {
        notesGenerator = GetComponent<NotesGenerator>();
        holeGenerateController = GetComponent<HoleGenerateController>();
        backGroundFlashingController = GetComponent<BackGroundFlashingController>();    
        DOTween.SetTweensCapacity(200, 125);
    }
    
    /// <summary>
    /// ゲームをスタートさせるときに行う処理
    /// </summary>
    public void GameStart()
    {
        notesGenerator.OnStartButton();
        SoundDirector.instance.PlayBGM(GameBGMClip);
        holeGenerateController.GenerateHole();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(true);
        }
        backGroundFlashingController.FlashingStart();
        scoreSlider.SetActive(true);
    }

    /// <summary>
    /// ゲームを終了させるときに行う処理
    /// </summary>
    public void GameEnd()
    {
        notesGenerator.OnEndButton();
        SoundDirector.instance.StopBGM();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(false);
        }
        backGroundFlashingController.FlashingStop();
        scoreSlider.SetActive(false);
    }
}
