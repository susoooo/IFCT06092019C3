using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Player1Script : MonoBehaviour
{
    public Rigidbody rb;

    public float speed;

    private Vector3 movement;

    void Start()
    {

    }

    void Update()
    {
        movement = new Vector3();

        rb.AddForce(movement * Time.deltaTime);
    }

}
