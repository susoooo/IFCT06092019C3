/*2-Crea una clase que represente un ordenador.
Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo.
Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.*/

public class Ordenador {
    
         

boolean encendido= false;
boolean enchufado= false;

//MÉTODOS


public void EnchufadoOrdenador(){
        if (enchufado==true)
        {
            System.out.println("El ordenador ya esta enchufado");
        }
        else
        {
            enchufado= true;
            System.out.println("El ordenador ha sido enchufado");  
        }
    }

public void EncenderOrdenador(){
        if (encendido==true)
        {
            System.out.println("El ordenador ya esta encendido");
        }
        else
        {
            if(enchufado==true)
            {
                encendido= true;
                 System.out.println("El ordenador ha sido encendido");  
            }
            else
            {System.out.println("No puedo encender el ordenador porque no esta enchufado");
        }
    }
}

public void ApagadoOrdenador(){
        if (encendido==false)
        {
            System.out.println("El ordenador ya esta apagado");
        }
        else
        {
            encendido= false;
            System.out.println("El ordenador ha sido apagado");  
        }
    }

public void DesenchufadoOrdenador(){
        if (enchufado==false)
        {
            System.out.println("El ordenador ya esta desenchufado");
        }
        else
        {
            encendido= false;   //aquí pasa el encendido a apagado
            enchufado= false;   //aquí pasa el enchufado a desenchufado
            System.out.println("El ordenador ha sido desenchufado");  
        }
    }
}


public class Portatil {
    
public static void main(String[] args)
        
{
Ordenador Portatil;
Portatil = new Ordenador( );

Portatil.EncenderOrdenador();
Portatil.ApagadoOrdenador();
Portatil.EnchufadoOrdenador();
Portatil.DesenchufadoOrdenador();


 
}

}

