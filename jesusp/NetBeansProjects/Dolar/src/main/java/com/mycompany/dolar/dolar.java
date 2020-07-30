/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.dolar;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Usuario
 */
public class dolar {
    public static void main(String[] args)
    {
        try {
            float euro;
            float dolar;
            System.out.println("Deme los dólares:");
            BufferedReader in =
                    new BufferedReader(new InputStreamReader(System.in));
            dolar = Float.parseFloat(in.readLine());
            euro=(float) (dolar*1.33250);  
            System.out.printf("Total euros:%.2f",euro);
        } catch (IOException ex) {
            System.out.println("Ha habido un error");
        }
    }
}
