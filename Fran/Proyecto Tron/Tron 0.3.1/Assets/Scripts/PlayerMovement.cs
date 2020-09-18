using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;


public class PlayerMovement : MonoBehaviour
{
    public Rigidbody rb;
    public GameObject player;

    public float speed;

    private Vector3 movement;
    private Vector3 pos;

    void Start()
    {
        
    }

    void Update()
    {
        rb.AddForce(-2000 * Time.deltaTime, 0, 0);
/*
        if (Input.GetKey("a"))
        {
            StartCoroutine(RotateCoroutine(new Vector3(0, -90, 0), 0.25f));

            rb.AddForce(0, 0, -2000 * Time.deltaTime);
        }

        if (Input.GetKey("d"))
        {
            StartCoroutine(RotateCoroutine(new Vector3(0, 90, 0), 0.25f));

            rb.AddForce(200 * Time.deltaTime, 0, 0);
        }

        */
    }


 //   public IEnumerator RotateCoroutine(Vector3 rotationEulerAngles, float rotationDuration) 
 //   { 
 //       /* Set the current goal Rotation to animate between them */ 
 //       Quaternion currentRotation = transform.localRotation; 
 //       Quaternion goalRotation = currentRotation * Quaternion.Euler(rotationEulerAngles); 

        /* Set control variables */ 
 //       float timePassed = 0.0f; 
//       float fracTime = 0.0f; 

        /* Begin the animation, end after rotationDuration seconds */ 
//        while (fracTime < 1) 
//       { 
            /* Set Rotation between current and goal depending on fracTime */
//            transform.transform.localRotation = Quaternion.Lerp(currentRotation, goalRotation, fracTime);

            /* Update timePassed and fracTime */ 
//            timePassed += Time.deltaTime; 

            /* On this way fracTime will always be a value between * 0 - start of animation and * 1 - end of animation after rotationDuration seconds */ 
//           fracTime = timePassed / rotationDuration; 

            /* yield return so the actual state gets printed */ 
//            yield return null; 
//       } 

        /* Just to be sure after the animation set yourGameObject * to exactly the tranformation value(s) you want */ 
//        transform.localRotation = goalRotation; 
//    } 


}
