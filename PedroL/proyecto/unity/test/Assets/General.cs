using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class General : MonoBehaviour {
	public GameObject parent;
	
	// Start is called before the first frame update
	void Start() {
		foreach (Transform t in parent.transform) {
			Debug.Log(t.name);
		}
		
		Transform[] children_transform_arr = parent.GetComponentsInChildren<Transform>();
		Debug.Log(children_transform_arr.Length);
		
		Transform[] parent_transform_arr = parent.GetComponentsInParent<Transform>();
		Debug.Log(parent_transform_arr.Length);
	}

	// Update is called once per frame
	void Update() {
		
	}
}
