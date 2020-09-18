using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Player1Script : MonoBehaviour
{
    public GameObject moto1;

    void Start()
    {
        moto1 = Resources.Load("Player1") as GameObject;

        Vector3 randomSpawn = new Vector3(Random.Range(1.0f, 48.0f), 3.5f, Random.Range(1.0f, 48.0f));

        Instantiate(moto1, randomSpawn, transform.rotation);
    }

    void Update()
    {

    }

}
