
import java.util.Scanner;

/*
4-Crea una clase que represente a un alumno. 
Cada alumno se identifica por su DNI. 
Se desea almacenar información de su nombre, sus apellidos, y sus notas finales 
en las asignaturas en las que se ha matriculado. 
De dichas asignaturas se dese almacenar tambien el nombre. 
Un alumno como mucho puede haberse matriculado de 30 asignaturas. 
Crea un programa en el que se pueda meter los datos de un alumno , 
y que calcule la nota media del alumno, utilizando objetos. 
Construye la clase que representa al alumno como hija de la clase definida en el apartado 5.
 */

 class Alumnos {
    
    private String DNI;
    private String nombre;
    private String apellidos;
    private float notasfinales[];
    private String asignatura[];
    private float notamedia;
      
    
    public Alumnos(String identif,String nom, String apel){ 
    
    notasfinales = new float[30];
    asignatura= new String[30];
    this.DNI=identif;
    this.nombre=nom;
    this.apellidos= apel;  
    }
    
    public void guardarnotas(){
      
    Scanner entrada = new Scanner(System.in);
    
    		for(int i = 0; i <= 5; i++) {
			System.out.println("\nIntroduzca la nota del alumno: ");
			notasfinales[i] = Float.parseFloat(entrada.nextLine());
		}
    }
    
    public void calculonotamedia(){
      
    Scanner entrada = new Scanner(System.in);
    
    		for(int i = 0; i <= 5; i++) {
                    
                        notamedia = notamedia + notasfinales[i];
                         }
                       	System.out.println("\nLa nota media de " +nombre+ " cuyo carnet " +DNI+" es: "+notamedia/6);
			
    }
       
		}    


public class Matricula {
  
    public static void main(String[] args){
    
        
    Alumnos Objeto;
    Objeto = new Alumnos("3333333Z","TERESA" , "PEREZ");  

         
    Alumnos Primero= new Alumnos("52874789A","Jesus" , "Seone");//esto es lo mismo que lo anterior
    
   Objeto.guardarnotas();
   
   Objeto.calculonotamedia();
   
   Primero.guardarnotas();
   
   Primero.calculonotamedia();
   
    
    }       
}
