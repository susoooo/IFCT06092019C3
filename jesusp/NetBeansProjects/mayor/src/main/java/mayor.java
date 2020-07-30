
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
public class mayor {
     public static void main(String[] args) throws IOException
     {
         int may;
	may=0;
        int menor;
        menor = 0;
        int semay;
        semay = 0;
        int numero1;
        int numero2;
        int numero3;
        System.out.println("Dame el primer numero: ");
         BufferedReader in =
                     new BufferedReader(new InputStreamReader(System.in));             
             numero1 = Integer.parseInt(in.readLine());
        System.out.println("Dame el segundo numero: ");                     
             numero2 = Integer.parseInt(in.readLine());
        System.out.println("Dame el tercer numero: ");                     
               numero3 = Integer.parseInt(in.readLine());
	if(numero1 > numero2 && numero1 > numero3)
	{
		may=numero1;	
	}
	else
	{
		if(numero2 > numero1  && numero2 > numero3)
		{	
			may=numero2;		
		}
		else 
		{
			if(numero3 > numero1 && numero3 > numero2)
			{	
				may=numero3;		
			}
		}
		
	}
         PrintStream printf = System.out.printf("El numero mayor es el:%d \n ", may);
        
	if(numero1 < numero2 && numero1 < numero3)
	{
		menor=numero1;
	}
	else
	{
		if(numero2 < numero1 && numero2 < numero3)
		{			
			menor=numero2;
		}
		else
		{
			if(numero3 < numero1 && numero3 < numero2)
			{
				menor=numero3;
			}
		}
		
	}
	System.out.printf("El numero menor es el: %d \n", menor);
        
	if(numero1 < numero2 && numero1 > numero3)
	{
		semay=numero1;
	}
	else
	{
		if(numero2 < numero1 && numero2 > numero3)
		{			
			semay=numero2;
		}
		else
		{
			if(numero3 < numero1 && numero3 > numero2)
			{
				semay=numero3;
			}
		}
		
	}
	System.out.printf("El segundo número mayor es el: %d", semay);
     }
}
