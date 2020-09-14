using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugIMGUI : MonoBehaviour {
	
	GameState game_state;
	LightManager light_manager;
	
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		light_manager = GameObject.Find("Empty").GetComponent<LightManager>();
	}

	// Update is called once per frame
	void Update() {
		
	}
	
	void OnGUI()
  {
    GUI.Box(
			new Rect ( (Screen.width / 2) - 50, 0, 100, 50),
			"visibility:\n" + light_manager.visibility.ToString()
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
		
		if (game_state.game_lost) {
			GUI.Box(
				new Rect (
					Screen.width / 2 - 50,
					Screen.height / 2 - 12,
					100,
					24
				),
				"ur so bad" 
			);
		}
  }
	
}
