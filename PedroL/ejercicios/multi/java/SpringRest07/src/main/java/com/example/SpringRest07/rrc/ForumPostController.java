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
public class ForumPostController {
	
	@GetMapping("/json_preview/forum_post")
	public ForumPost forum_post() {
		return new ForumPost(3245,
		                     "2017-07-23T21:56:35",
		                     "https://www.kaggle.com/bennijesus/lovecraft-fiction",
		                     "Cthulu Mythos",
		                     124553,
		                     false);
	}
	
}
