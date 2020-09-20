using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

// using System.Net.Sockets;

public class PlayerMovement : MonoBehaviour
{

    public Rigidbody rb;
    public GameObject player;

    public float speed;

    Quaternion targetAngle_R = Quaternion.Euler(0, 90, 0);
    Quaternion targetAngle_L = Quaternion.Euler(0, -90, 0);

    public Quaternion currentAngle;
    public Vector3 movement; 

    void Start()
    {
        currentAngle = targetAngle_L;

        speed = 150f;

    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            currentAngle = currentAngle * targetAngle_R;
        }

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            currentAngle = currentAngle * targetAngle_L;
        }

        transform.rotation = Quaternion.Slerp(transform.rotation, currentAngle, 0.2f);

        
        switch ((int)currentAngle.eulerAngles.y)
        {
            case 0:
                movement = new Vector3(-1, 0, 0);
                rb.velocity = movement.normalized * speed;
                break;
            case 90:
                movement = new Vector3(0, 0, 1);
                rb.velocity = movement.normalized * speed;
                break;
            case 180:
                movement = new Vector3(1, 0, 0);
                rb.velocity = movement.normalized * speed;
                break;
            case 270:
                movement = new Vector3(0, 0, -1);
                rb.velocity = movement.normalized * speed;
                break;
        }
        
    }

}
