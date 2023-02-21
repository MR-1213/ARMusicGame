using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GamePlayManager : MonoBehaviour
{

    [Header("DecorationObjects/BackRhythmObjectsのオブジェクト群")]
    [SerializeField] private RhythmObject[] rhythmObjects = new RhythmObject[6];
    [SerializeField] private SoundController soundController;
    private NotesGenerator notesGenerator;
    private HoleGenerateController holeGenerateController;

    private void Start() 
    {
        notesGenerator = GetComponent<NotesGenerator>();
        holeGenerateController = GetComponent<HoleGenerateController>();    
        DOTween.SetTweensCapacity(200, 125);
    }
    
    /// <summary>
    /// ゲームをスタートさせるときに行う処理
    /// </summary>
    public void GameStart()
    {
        notesGenerator.OnStartButton();
        soundController.MusicPlay();
        holeGenerateController.GenerateHole();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(true);
        }
    }

    /// <summary>
    /// ゲームを終了させるときに行う処理
    /// </summary>
    public void GameEnd()
    {
        notesGenerator.OnEndButton();
        soundController.MusicStop();
        for(int i = 0; i < rhythmObjects.Length; i++)
        {
            rhythmObjects[i].IsActive(false);
        }
    }
}
