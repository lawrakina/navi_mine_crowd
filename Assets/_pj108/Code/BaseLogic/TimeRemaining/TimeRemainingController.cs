using System;
using System.Collections.Generic;


namespace _pj108.Code.BaseLogic.TimeRemaining
{
    public sealed class TimeRemainingController : BaseController, IExecute
    {
        #region Fields

        private readonly List<ITimeRemaining> _timeRemainings;

        #endregion


        #region ClassLifeCycles

        public TimeRemainingController()
        {
            _timeRemainings = TimeRemainingExtensions.TimeRemainings;
            Controllers.Add(this);
        }

        #endregion

        public void OnActivate()
        {
        }

        public void OnDeactivate()
        {
        }

        public void Execute(float deltaTime)
        {
            for (var i = 0; i < _timeRemainings.Count; i++)
            {
                var obj = _timeRemainings[i];
                obj.CurrentTime -= deltaTime;
                Gui.Instance.SetTime((int)obj.CurrentTime);
                if (obj.CurrentTime <= 0.0f)
                {
                    obj?.Method?.Invoke();
                    if (!obj.IsRepeating)
                    {
                        obj.RemoveTimeRemaining();
                    }
                    else
                    {
                        obj.CurrentTime = obj.Time;
                    }
                }
            }
        }
    }
}