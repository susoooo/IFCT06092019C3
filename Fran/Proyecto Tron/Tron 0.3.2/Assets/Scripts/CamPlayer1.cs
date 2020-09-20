using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Security.Cryptography;
using UnityEngine;

public class CamPlayer1 : MonoBehaviour
{

    public GameObject target;
    private Vector3 distance;

    void Start()
    {
        distance = transform.position - target.transform.position;
    }


    void Update()
    {
        transform.position = target.transform.position + distance;
    }
}
