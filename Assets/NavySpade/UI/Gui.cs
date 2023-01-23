using System;
using TMPro;
using UnityEngine;

public class Gui : MonoBehaviour
{
    public static Gui Instance;

    [Header("Components")] 
    [SerializeField] private Canvas canvas;

    [SerializeField] private GameObject _timerObj;
    [SerializeField] private TMP_Text _timer;
    private bool _isInit = false;

    private void Awake() {
        Instance = this;
    }

    private void OnDestroy() {
        Instance = null;
    }
    
    #region getters

    public Canvas Canvas => canvas;

    #endregion

    public void SetTime(int value) {
        if(!_timerObj.activeSelf) _timerObj.SetActive(true);
        var time = new TimeSpan(0,0,value);
        _timer.text = $"{time.Minutes}:{time.Seconds}";
    }
}