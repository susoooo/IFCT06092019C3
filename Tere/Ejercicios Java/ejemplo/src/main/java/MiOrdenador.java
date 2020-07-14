
class Ordenador {
    

    String marca;
    String procesador;
    int peso;
    boolean encendido= false;
    boolean pantalla= false;
    

    
    public void EncenderOrdenador()
    {
        if (encendido==true)
        {
            System.out.println("El ordenador ya esta encendido");
        }
        else
        {
            encendido= true;
            pantalla=true;
            System.out.println("El ordenador ha sido encendido");
            
        }
    }

    
    public void Estado()
    {
        System.out.print("\nEl estado del ordenador es el siguiente:");
        System.out.print("\nMarca: "+ marca);
        System.out.print("\nProcesador: "+ procesador);
        System.out.print("\nPeso: " + peso + " kg." );
        
        
       if (encendido == true)
       {
          System.out.print("El ordenador está encendido");
        }
       else
       {
           System.out.print("El ordenador está apagado");
       }
          
       
         if (pantalla == true)
       {
          System.out.print("\nLa pantalla está activada");
        }
       else
       {
           System.out.print("\nLa pantalla está desactivada");
           
         System.out.println("\n");
       }
         

    }
public String ObtenerMarca()
{
return marca;
}

public void EstablecerMarca (String ma)
{
marca=ma;
}

}

public class MiOrdenador
{

       public static void main (String[] args) 
    {
        Ordenador MiOrdenador;
        MiOrdenador= new Ordenador();
        
        MiOrdenador.EncenderOrdenador();
       MiOrdenador.Estado();
        
      
    }
}



    

