using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePlayManager : MonoBehaviour
{

    [Header("DecorationObjects/BackRhythmObjectsのオブジェクト群")]
    [SerializeField] private RhythmObject[] rhythmObjects = new RhythmObject[6];
    [SerializeField] private SoundController soundController;
    private NotesGenerator notesGenerator;

    private void Start() 
    {
        notesGenerator = GetComponent<NotesGenerator>();    
    }
    
    /// <summary>
    /// ゲームをスタートさせるときに行う処理
    /// </summary>
    public void GameStart()
    {
        notesGenerator.OnStartButton();
        soundController.MusicPlay();
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
