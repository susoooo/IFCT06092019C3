/*
1-Crea una clase que represente a una persona. Al menos debe contener información sobre su nombre, apellido primero y segundo, 
fecha de nacimiento, lugar de nacimiento y pais de nacimiento. Crea constructores que permitan la creación de personas sin saber sus datos, 
conociendo su DNI, su nombre y apellidos, ambos, y todos los datos incluidos en la clase
 */

/**
 *
 * @author Usuario
 */

  class Personas //Nombre de la clase
{
    private String nombre;// Nombre de cada  persona
    private String apellidos;// Apellidos de cada  persona
    private int edad;// Edad de cada  persona
    private int fecha;// Fecha de Naciemiento de cada persona
    private String numeroDocumentoidentidad;// DNI de cada  persona
    //boolean imprime;

    //Constructores
    
    //Sin nada
    public Personas (){
         
    }
    
    //Solo DNI
     public Personas (String numeroDocumentoidentidad){
         
         
       this.numeroDocumentoidentidad = numeroDocumentoidentidad;
              
    }
    
    //Nombre y apellidos
    
    public Personas (String nombre, String apellidos ){
        
      this.nombre = nombre;
      this.apellidos = apellidos;  
        
    }
    
    
    //Todo
    
    public Personas (String nombre,String apellidos,int edad,int fecha,String numeroDocumentoidentidad){
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.edad = edad;
        this.fecha = fecha;
        this.numeroDocumentoidentidad = numeroDocumentoidentidad;
    }//Cierre del constructor

    

    //Método del nombre de una persona
    public void setnombre (String valornombre){
        nombre = valornombre; 
    }
    
    
    //Método para  los apellidos de una persona
    public void setapellidos (String valorapellidos){
        apellidos = valorapellidos;
    }//cierre del método
    
    
    //Método para la edad de una persona
    public void setedad (int valoredad){
        edad = valoredad;
    }//Cierre del método
    
    
     //Método para la fecha de una persona
    public void setano (int valorano){
        fecha = valorano;
    }//Cierre del método
    
    
       //Método DNI de una persona
    public void setnumeroDocumentoidentidad (String valornumeroDocumentoidentidad){
        numeroDocumentoidentidad = valornumeroDocumentoidentidad;
    }//Cierre del método 
    
    
    //METODOS GET
  
   
    public String getnombre (){ 
        return nombre; 
    }
    
    public String getapellidos () { 
        return apellidos; 
    
    } 
    
    public int getedad () { 
        return edad; } 
    
    public int getano () { 
        return fecha; } 
    
    
    public String getnumeroDocumentoidentidad () { 
        return numeroDocumentoidentidad; } 
    
    
    public void imprime(){
        
       System.out.println(" " + nombre  + " " +   apellidos + " " + edad + " " + fecha + " " + numeroDocumentoidentidad );
        
        
  
    }
    
     
}

    public class PersonasX {
    
    public static void main(String[] args) 

 {

     Personas P1= new Personas();
     
     Personas P2= new Personas("34321810Z");
     
     Personas P3= new Personas("ELVIS" , "MARTIN");
     
     Personas P4= new Personas("ELVIS" , "MARTIN" , 25 , 1994 , "34321810Z");
     
    
     
     
    P1.imprime();
    P2.imprime();
    P3.imprime();
    P4.imprime();
}
    
    }
            


   

