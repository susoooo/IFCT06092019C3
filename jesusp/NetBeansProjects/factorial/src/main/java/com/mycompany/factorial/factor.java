/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.factorial;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Usuario
 */
public class factor {
    public static void main(String[] args)
    {
          
        try {
            int contador;
            int factorial = 1;
            int numero;
            System.out.println("Dame un numero: ");            
            BufferedReader in =
                    new BufferedReader(new InputStreamReader(System.in));
            numero = Integer.parseInt(in.readLine());
            
            if(numero<=0)
            {
                System.out.println("numero no valido");
            }
            else
            { 
                for(contador=1;contador<=numero; contador++)
            {
                factorial=factorial*contador;
            }             
               System.out.printf("El factorial es:%d",factorial);
            }  
            
            
            
           
            
        } catch (IOException ex) {
            Logger.getLogger("Error");
        }
}

}

   
    

	
	

    
