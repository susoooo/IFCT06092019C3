﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState : MonoBehaviour {
	
	public int keys_total;
	public int keys_taken = 0;
	public int keys_left;
	
	// Start is called before the first frame update
	void Start() {
		keys_total = GameObject.FindGameObjectsWithTag("Key").Length;
		keys_left = keys_total;
		
		Debug.Log(keys_left);
	}

  // Update is called once per frame
	void Update() {
		
	}
	
	public void update_key_count() {
		keys_left = GameObject.FindGameObjectsWithTag("Key").Length;
		
		keys_taken = keys_total - keys_left;
		
		if (keys_left == 0) {
			Time.timeScale = 0;
		}
	}
	
}
