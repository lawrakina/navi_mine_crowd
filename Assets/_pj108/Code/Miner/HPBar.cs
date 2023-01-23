using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HPBar : MonoBehaviour
{
    [SerializeField] private Slider _slider;

    public void Init(int health)
    {
        _slider.maxValue = health;
        SetHealth(health);
    }

    public void SetHealth(int health)
    {
        _slider.value = health;
        if (health == 0) Toggle(false);
    }
    
    public void Toggle(bool value = true)
    {
        gameObject.SetActive(value);
    }
}
