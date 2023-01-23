using System.Collections;
using System.Linq;
using _pj108.Code;
using _pj108.Code.Levels;
using Core.Meta.Economic.Rewards;
using Core.UI.Popups.Abstract;
using EventSystem.Runtime.Core.Managers;
using NavySpade.Meta.Runtime.Economic.Rewards.DifferentTypes;
using NavySpade.UI.Popups.Abstract;
using NavySpade.UI.Popups.DifferentPopups;
using TMPro;
using UnityEngine;


namespace Core.UI.Popups
{
    public class Popup_Win : Popup
    {
        [SerializeField] private bool _needExitTime = false;
        [SerializeField] private float _exitTime = 2f;
        [SerializeField] private TextMeshProUGUI _cointsCount;
        [SerializeField] private WinItemScore _template;
        [SerializeField] private Transform _container;

        private Coroutine _exitCoroutine = null;
        private ScoreItemsData _data;
        private ScoreItem[] _sortedData;

        public override void OnStart() {
            // Initialize(LevelHandler.ResultData);
            Initialize(null);
        }

        public void Initialize(ScoreItemsData data) {
            // _data = data;
            //
            // _sortedData = _data.OrderByDescending(x=> x.Score).ToArray();
            //
            // foreach (var item in _sortedData)
            // {
            //     var go = Instantiate(_template, _container);
            //     go.Init(item);
            // }
            
            if (_needExitTime)
                _exitCoroutine = StartCoroutine(WaitForExit());
        }

        public void RestartLevel()
        {
            //SoundPlayer.PlaySoundFx("Click");
            //  _reward.Complete(); todo reward
            EventManager.Invoke(GameStatesEM.Restart);
            Close();
        }

        public void NextLevel()
        {
            if (_exitCoroutine != null)
                StopCoroutine(_exitCoroutine);

            _exitCoroutine = null;
            GlobalParameters.DoubleLevelNumber++;
            //SoundPlayer.PlaySoundFx("Click");
            // _reward.Complete(); todo reward
            
            Close();
            
            EventManager.Invoke(GameStatesEM.NextLevel);
        }

        public override void OnAwake()
        {
        }

        private IEnumerator WaitForExit()
        {
            yield return new WaitForSecondsRealtime(_exitTime);
            NextLevel();
        }
    }
}