﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotacion : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey("right"))
        {
            transform.Rotate(0, 90 * Time.deltaTime, 0);
        }

        if (Input.GetKey("left"))
        {
            transform.Rotate(0, -90 * Time.deltaTime, 0);
        }
    }
}