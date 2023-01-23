using System.Collections;
using System.Linq;
using _pj108.Code.GameSettings;
using Cinemachine;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Player {
    internal class CameraController : BaseLogic.BaseController {
        #region PrivateData

        private CinemachineVirtualCamera _camera;
        
        private CinemachineFramingTransposer _transposer;
        private CinemachineBasicMultiChannelPerlin _noise;
        private CaptainModel _model;
        private CameraSettings _settings;

        #endregion


        public CameraController
        (CaptainModel playerModel,
         LeaderSettings playerSettings,
         CinemachineVirtualCamera virtualCamera,
         Transform target) {
            _camera = virtualCamera;
            _camera.Follow = target;
            _model = playerModel;
            _settings = playerSettings.CameraSettings;
            
            if (_transposer == null)
            {
                _transposer =
                    _camera.GetCinemachineComponent(CinemachineCore.Stage.Body) as CinemachineFramingTransposer;
            }

            _model.UnitsController.ObserveCountChanged().Subscribe(ChangeCounts).AddTo(_subscriptions);
        }

        private void ChangeCounts(int count) {
            _transposer.m_CameraDistance = _settings.CameraDistance.First(x=>x.UnitsCount >= count).CameraDistance;
        }

        // public async void ComingAndShake(CaptainBehaviour obj) {
        //     _transposer.m_CameraDistance = _settings.CameraDistanceWhenAttack;
        //
        //     var duration = 0.2f;
        //     var timeStart = 0f;
        //     while (timeStart < duration)
        //     {
        //         timeStart += Time.unscaledDeltaTime;
        //
        //         Time.timeScale = Mathf.Lerp(
        //             Settings.Get<BattleSettings>().TimeScaleWhenAttack, Time.timeScale, duration / timeStart);
        //         await Task.Delay((int) (Time.unscaledDeltaTime * 1000f));
        //     }
        //
        //     await Task.Delay((int) (Settings.Get<BattleSettings>().RatioAttackModifier * 500));
        //     StartCoroutine(_ProcessShake(
        //                        Settings.Get<BattleSettings>().ShakePower,
        //                        Settings.Get<BattleSettings>().ShakeDuration));
        //     await Task.Delay((int) (Settings.Get<BattleSettings>().RatioAttackModifier * 500));
        //
        //     duration = 0.2f;
        //     timeStart = 0f;
        //     while (timeStart < duration)
        //     {
        //         timeStart += Time.unscaledDeltaTime;
        //
        //         Time.timeScale = Mathf.Lerp(
        //             Time.timeScale, 1, duration / timeStart);
        //         await Task.Delay((int) (Time.unscaledDeltaTime * 1000f));
        //     }
        //
        //     _transposer.m_CameraDistance = _settings.CameraDistance;
        //     Time.timeScale = 1;
        // }

        // public void UpdateCamera(UpgradeType settings) {
        //     _settings = settings;
        //     
        //     if (!_camera) return;
        //     if (_transposer == null)
        //     {
        //         _transposer =
        //             _camera.GetCinemachineComponent(CinemachineCore.Stage.Body) as CinemachineFramingTransposer;
        //     }
        //
        //     if (_noise == null)
        //     {
        //         _noise = _camera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
        //     }
        //
        //     _transposer.m_CameraDistance = _settings.CameraDistance;
        // }

        private IEnumerator _ProcessShake(float shakeIntensity = 5f, float shakeTiming = 0.2f) {
            Noise(1, shakeIntensity);
            yield return new WaitForSeconds(shakeTiming);
            Noise(0, 0);
        }

        private void Noise(float amplitudeGain, float frequencyGain) {
            _noise.m_AmplitudeGain = amplitudeGain;
            _noise.m_FrequencyGain = frequencyGain;
        }
    }
}