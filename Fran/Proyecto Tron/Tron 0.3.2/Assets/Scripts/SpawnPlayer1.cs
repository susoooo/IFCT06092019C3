using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlayer1 : MonoBehaviour
{

    public GameObject prefabInstanciado;
    public GameObject padrePlayer;

    void Start()
    {
        SpawnFood();

    }

    public void SpawnFood()
    {

        Vector3 pos = new Vector3(Random.Range(-24, 24), 2.4f, Random.Range(-24, 24));

        GameObject hijoPlayer = Instantiate(prefabInstanciado, pos, Quaternion.identity) as GameObject;

        hijoPlayer.transform.parent = padrePlayer.transform;
        hijoPlayer.transform.position = padrePlayer.transform.position;

    }

}