using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugIMGUI : MonoBehaviour {
	
	GameState game_state;
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		
	}

	// Update is called once per frame
	void Update() {
		
		
	}
	
	void OnGUI()
  {
    GUI.Box(
			new Rect (0,0,100,50),
			"keys_taken:\n" + game_state.keys_taken.ToString() 
		);
		
		if (game_state.keys_left == 0) {
			GUI.Box(
				new Rect (
					Screen.width / 2 - 50,
					Screen.height / 2 - 12,
					100,
					24
				),
				"ur so good" 
			);
		}
		
  }
	
	void OnDrawGizmos() {
		Gizmos.DrawLine(Vector3.zero, new Vector3(0.0f, 200.0f, 0.0f));
		
	}
	
}
