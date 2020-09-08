using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movimiento : MonoBehaviour
{
    public Rigidbody RBMoto;

    void Start()
    {
        
    }

    void Update()
    {
        RBMoto.AddForce(0, 0, 200 * Time.deltaTime);

        if (Input.GetKey("right"))
        {
            RBMoto.AddForce(200 * Time.deltaTime, 0, 0);
        }

        if (Input.GetKey("left"))
        {
            RBMoto.AddForce(- 200 * Time.deltaTime, 0, 0);
        }
    }
}
