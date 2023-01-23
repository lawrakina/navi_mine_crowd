using System;
using UniRx;


namespace _pj108.Code.BaseLogic {
    public class BaseController : IController, IStarted, IDisposable {
        private bool _isOn = false;
        protected CompositeDisposable _subscriptions = new CompositeDisposable();

        public virtual void Dispose()
        {
            _isOn = false;
            _subscriptions?.Dispose();
            Controllers.Remove(this);
        }

        public virtual void Init() {
            _isOn = true;
        }

        public bool IsOn => _isOn;
    }
}