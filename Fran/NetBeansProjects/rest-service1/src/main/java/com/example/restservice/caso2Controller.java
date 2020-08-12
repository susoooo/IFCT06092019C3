
package com.example.restservice;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class caso2Controller 
{
    private final int id = 0;
    private final String date = "2017-07-23T21:56:35";
    private final String link = "https://www.kaggle.com/bennijesus/lovecraft-fiction";
    private final String title = "Cthulhu Mythos";
    private final String author = "124553";
    private final boolean sticky = false;

    @GetMapping("/caso2")
    public caso2 caso2() 
    {
            return new caso2(3245, date, link, title, author, sticky);
    }
}