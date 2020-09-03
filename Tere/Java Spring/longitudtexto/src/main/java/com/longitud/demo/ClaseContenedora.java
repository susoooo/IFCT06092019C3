/*
/*2. Crea un servicio web al que se le envie un texto y devuelva su longitud, 
el número de caracteres que contiene, el de letras y el de números.*/
 
package com.longitud.demo;


public class ClaseContenedora {
    
   long longitud;
   int caracteres;
   
   int letras;
   long numeros;
            


public ClaseContenedora (String text){
    
    longitud= text.length();
   
      
        
  
    caracteres=0;
    for (int i = 0; i <= text.length(); i++)  
    {
        if(text.charAt(i)!=' ')
        {
            caracteres++; 
        }
    }
    
    letras=0;
    for (int i = 0; i < text.length(); i++) 
       {
           if(text.isLetter(i))
               
        {
               letras++;
        }
        
 } 
    
    
    
      public long getlongitud() {return longitud ;} 
       
      public int getcaracteres() {return caracteres ;} 
      
      public long getletras() {return letras ;}
      
}




