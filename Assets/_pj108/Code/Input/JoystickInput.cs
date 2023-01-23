using UnityEngine;


namespace _pj108.Code.Input
{
    public class JoystickInput : MonoBehaviour
    {
        [SerializeField] private Joystick _joystick;
        [SerializeField] private bool _isVisible;

        private static Joystick _joystickInstance;

        public static Vector2 Direction => _joystickInstance.Direction;

        private void Awake()
        {
            _joystickInstance = _joystick;
            _joystickInstance.IsVisible = _isVisible;

            SetEnable(false);
        }

        public void SwitchVisible()
        {
            _isVisible = !_isVisible;
            _joystickInstance.IsVisible = _isVisible;
        }

        public static void SetEnable(bool isEnable)
        {
            _joystickInstance.gameObject.SetActive(isEnable);

            if (!isEnable)
            {
                _joystickInstance.Stop();
            }
        }
    }
}