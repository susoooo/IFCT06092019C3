using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightManager : MonoBehaviour {
	
	GameObject player;
	GameObject[] sources;
	Light closest_source;
	public float visibility;
	public float distance;
	float shortest_distance;
	float partial_visibility;
	const float max_visibility_radius = 3.0f;
	const float min_visibility = 0.05f;
	
	// Start is called before the first frame update
	void Start() {
		player = GameObject.Find("Player");
	}

  // Update is called once per frame
	void Update() {
		sources = GameObject.FindGameObjectsWithTag("LightSource");
		shortest_distance = Mathf.Infinity;
		
		foreach (var source in sources) { 
			Light source_light = source.GetComponent<Light>();
			distance = Vector3.Distance(player.transform.position, source.transform.position);
			
			if ((distance * (source_light.intensity * 0.5f) ) < shortest_distance) { //wtf
				shortest_distance = distance;
				closest_source = source_light;
			}
		}
		
		distance = Vector3.Distance(player.transform.position, closest_source.transform.position);
		
		//This is bad, it doesn´t take Light.range into account
		//And doesn't make smooth transitions when lights differ in intensity
		if (distance < max_visibility_radius) {
			visibility = 1.0f;
		} else {
			visibility =  1 / Mathf.Pow( 
				distance - max_visibility_radius + 1,
				1 / (closest_source.intensity * 0.5f)
			);
			visibility = (visibility < 0.05f) ? 0.0f : visibility;
		}
	}
	
	void OnGUI() {
		/*GUI.Box(
			new Rect (0, 0, 150, 50),
			"light_sources.Length:\n" + sources.Length.ToString()
		);*/
	}
}
