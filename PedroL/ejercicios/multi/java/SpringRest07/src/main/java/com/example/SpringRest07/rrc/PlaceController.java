/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.springrest07.rrc;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

/**
 *
 * @author Usuario
 */
@RestController
public class PlaceController {
	
	private Float[] location = new Float[] {
			25.2285f,
			55.3273f,
		};
	
	@GetMapping("/json_preview/place")
	public Place place() { return new Place("Grand Hyatt", location); }
	
}
