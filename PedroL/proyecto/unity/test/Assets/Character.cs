using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
	const float speed = 10.0f;
	Camera camera;
    // Start is called before the first frame update
    void Start()
    {
			Cursor.visible = false;
			Cursor.lockState = CursorLockMode.Locked;
			
			camera = GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
			float horizontal = Input.GetAxis("Horizontal");
			float vertical = Input.GetAxis("Vertical");
			float mouse_x = Input.GetAxis("Mouse X");
			float mouse_y = Input.GetAxis("Mouse Y");
			
			if (horizontal != 0) {
				transform.Translate(Vector3.right * vertical * Time.deltaTime);
			}
      if (vertical != 0) {
				transform.Translate(Vector3.forward * speed * vertical * Time.deltaTime);
			}
			if (mouse_x != 0) {
				transform.Rotate(
					Vector3.up,
					10 * mouse_x,
					Space.World
				);
			}
			if (mouse_y != 0) {
				camera.transform.Rotate(
					Vector3.left,
					10 * mouse_y,
					Space.Self
				);
			}
    }
}
