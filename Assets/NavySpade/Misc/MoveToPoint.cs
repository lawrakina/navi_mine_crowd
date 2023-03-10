using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveToPoint : MonoBehaviour
{
    public Vector3 initPosition;
    public Vector3 movePoint;

    public float speed = 5f;

    public bool isFinished = true;
    public bool isNeedUseLocalCoords = true;

    void Start() {
        initPosition = transform.localPosition;

        if (movePoint != new Vector3(0, 0, 0)) {
            StartMoveToPoint(movePoint, speed, isNeedUseLocalCoords);
        }
    }

    void Update() {
        if (!isFinished) {
            float step = speed * Time.deltaTime; // calculate distance to move

            Vector3 checkPos;
            if (isNeedUseLocalCoords) {
                checkPos = transform.localPosition;
                transform.localPosition = Vector3.MoveTowards(checkPos, movePoint, step);
            } else {
                checkPos = transform.position;
                transform.position = Vector3.MoveTowards(checkPos, movePoint, step);
            }

            if (Vector3.Distance(movePoint, transform.position) < 0.86f) {
                //transform.position = movePoint;
                isFinished = true;
            }
        }
    }

    public void StartMoveToPoint(Vector3 _movePoint, float _speed, bool _useLocalCoords = true) {
        movePoint = _movePoint;
        speed = _speed;
        isNeedUseLocalCoords = _useLocalCoords;

        isFinished = false;
    }

    public void ReturnBack(float _speed) {
        StartMoveToPoint(initPosition, _speed);
    }
}
