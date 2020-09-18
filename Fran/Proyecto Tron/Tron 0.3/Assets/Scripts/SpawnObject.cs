using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnObject : MonoBehaviour
{

    public GameObject player;

    public int rotation;

    void Start()
    {
        SpawnFood();

    }

    void Update()
    {
        
    }

    public void SpawnFood()
    {
        rotation = Random.Range(-3, 3);

        Vector3 pos = new Vector3(Random.Range(1, 48), 1.8f, Random.Range(1, 48));

        // Player1.transform.Rotate((90 * rotation) * pos.y, );

        Instantiate(player, pos, Quaternion.identity);
    }


}
