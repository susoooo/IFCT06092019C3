using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Threading;
using UnityEngine;

public class Player1Controller : MonoBehaviour
{
    public float horizontalMove;
    public float speed;

    public CharacterController player1;
    private Vector3 player1Input;

    private Vector3 movePlayer1;

    public Camera mainCamera;

    private Vector3 camForward;
    private Vector3 camRight;

    void Start()
    {
        player1 = GetComponent<CharacterController>();
    }

    void Update()
    {
        horizontalMove = Input.GetAxis("Horizontal");

        player1Input = new Vector3(horizontalMove, 0, 0);
        player1Input = Vector3.ClampMagnitude(player1Input, 1);


        camDirection();

        movePlayer1 = player1Input.x * camRight + player1Input.z * camForward;

        player1.transform.LookAt(player1.transform.position + movePlayer1);

        player1.Move(movePlayer1 * speed * Time.deltaTime);
    }

    void camDirection()
    {
        camForward = mainCamera.transform.forward;
        camRight = mainCamera.transform.right;

        camForward.y = 0;
        camRight.y = 0;

        camForward = camForward.normalized;
        camRight = camRight.normalized;

    }
}
