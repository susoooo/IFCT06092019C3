using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Security.Cryptography;
using UnityEngine;

public class CamPlayer1 : MonoBehaviour
{

    public GameObject player;
    private Vector3 distance;

    void Start()
    {
        distance = transform.position - player.transform.position;
    }


    void Update()
    {
        transform.position = player.transform.position + distance;
    }
}
