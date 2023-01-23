using _pj108.Code;
using _pj108.Code.Levels;
using Core.UI.Popups;
using Core.UI.Screens.Base;
using EventSystem.Runtime.Core.Dispose;
using EventSystem.Runtime.Core.Managers;
using NavySpade.Meta.Runtime.Economic.Rewards.DifferentTypes;
using NavySpade.Modules.Sound.Runtime.Core;
using NavySpade.UI.Popups.DifferentPopups;

namespace NavySpade.UI.Screens
{
    public class GameScreen : BaseScreen
    {
        private EventDisposal _disposable;

        protected override void Awake()
        {
            _disposable = new EventDisposal();

            EventManager.Add(PopupsEnum.OpenStartGame, OpenStartGame).AddTo(_disposable);
            EventManager.Add(PopupsEnum.OpenLosePopup, OpenLosePopup).AddTo(_disposable);
            EventManager.Add<ScoreItemsData>(PopupsEnum.OpenWinPopup, OpenWinPopup).AddTo(_disposable);
        }

        public void Settings()
        {
            SoundPlayer.PlaySoundFx("Click");
            OpenPopup<SettingsPopup>(nameof(SettingsPopup));
        }

        public void OpenStartGame()
        {
            OpenPopup<StartGamePopup>(nameof(StartGamePopup), popup => { },
                () => { EventManager.Invoke(GameStatesEM.StartGame); });
        }

        public void OpenLosePopup()
        {
            OpenPopup<LosePopup>(nameof(LosePopup), null, null, true);
        }

        public void OpenWinPopup(ScoreItemsData data)
        {
            OpenPopup<Popup_Win>(nameof(Popup_Win), p => p.Initialize(data), null, true);
        }

        private void OnDestroy()
        {
            _disposable.Dispose();
        }
    }
}