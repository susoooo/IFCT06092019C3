using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState : MonoBehaviour {
	
	public int keys_total, keys_taken = 0, keys_left;
	public bool game_lost = false;
	
	// Start is called before the first frame update
	void Start() {
		keys_total = GameObject.FindGameObjectsWithTag("Key").Length;
		keys_left = keys_total;
		
		Debug.Log("keys_left: " + keys_left);
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
	
	public void game_loss() {
		game_lost = true;
		Time.timeScale = 0;
	}
	
}
