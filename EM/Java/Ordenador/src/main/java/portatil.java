/*
2-Crea una clase que represente un ordenador.
Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo. 
Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.
 */

public class portatil {
    
    String marca;
    String procesador; 
    int peso;
    boolean encendido=false;
    boolean apagado=false;
    boolean enchufado=false;
    boolean desenchufado=false; 
    
    
  //Hacer los metodos 
    
    public void EncenderOrdenador(){
        
       if(encendido==true){
           
           System.out.println("El ordenador esta Encendido");
       }
        
        else
       {
          encendido=true;
          
           System.out.println("El ordenador ha sido Encendido");
       }
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
