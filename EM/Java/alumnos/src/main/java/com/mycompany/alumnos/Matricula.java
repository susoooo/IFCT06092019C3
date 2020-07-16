/*
Crea una clase que represente a un alumno. Cada alumno se identifica por su DNI. 
Se desea almacenar información de su nombre, sus apellidos, y sus notas finales en las asignaturas en las que se ha matriculado. 
De dichas asignaturas se dese almacenar tambien el nombre. Un alumno como mucho puede haberse matriculado en 30 asignaturas. 
Crea un programa en el que se pueda meter los datos de un alumno , y que calcule la nota media del alumno, utilizando objetos. 
Construye la clase que representa al alumno como hija de la clase definida en el apartado 5.
 * 
 
 * 
 */
 class Alumno { //Nombre de la clase-- Representa a un alumno
    
  private String nombre; 
  private String apellidos;
  private String numerodeidentidad;
  private int notas[];
  private int notasfinales;
  private int asignaturas;
  
 
  
  public Alumno(){ //Constructores de las clases
      
  }
               
  public Alumno(String nombre, String apellidos,String numeroidentidad, int notasfinales, int asignaturas){
  
  this.nombre= nombre;
  this.apellidos= apellidos;
  this.numerodeidentidad= numerodeidentidad;
  this.notasfinales= notasfinales;
  this.asignaturas= asignaturas;
  this.notas[]= notas; 
  

} //Cierro el Constructor

  //Metodo para el nombre de los alumnos
  
  public void setnombre (String Valornombre){
      
      nombre=  Valornombre;
  }
  
   public void setapellidos (String Valorapellidos){
      
      nombre=  Valorapellidos;
  }
  
    public void setnumerodeidentidad (String Valordni){
      
     numerodeidentidad =  Valordni;
 
  }
    
    public void setnotas (int Notas){
        
        notas= Notas[30];
        
    }
    
    
    
    
    
  
   public void setnotasfinales (int Valornotas){
      
      notasfinales= Valornotas;   
  }
  
  public void setasignaturas (int Valormat){
      
      asignaturas= Valormat;
  }
   
   //Metodos GET
   
  
  
  
  
  
  
  
  
  
 }
  
 













