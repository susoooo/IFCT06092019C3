/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.demo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
@Controller // This means that this class is a Controller
@RequestMapping(path="/demo") 
public class Control {
  @Autowired // This means to get the bean called userRepository. Which is 
    		    // auto-generated by Spring, we will use it to handle the data
  private misifuEntity userRepository;
  
    
    @PostMapping(path="/add") // Map ONLY POST Requests
public @ResponseBody String addNewEntidad (
@RequestParam Integer id,@RequestParam String texto) {
    // @ResponseBody means the returned String is the response, not a view name
    // @RequestParam means it is a parameter from the GET or POST request
    
Entidad n = new Entidad();
    n.setId(id);
    n.setTexto(texto);
    userRepository.save(n);
    return "Saved"; 
  }
@GetMapping(path="/all")
  public @ResponseBody Iterable<Entidad> getAllUsers() {
    // This returns a JSON or XML with the users
    return userRepository.findAll();
  }
}