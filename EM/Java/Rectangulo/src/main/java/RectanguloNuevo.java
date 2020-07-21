/*
3-Crea una clase que represente a un rectangulo mediante su base y su altura. 
Implementa métodos para cambiar su base y su altura, 
y otros que calcule su area y su perímetro. 
área= base * altura y perímetro=2*base + 2*altura).

 */


import java.util.Scanner;

 class CambioRectangulo {
    
    private int base=15;
    private int altura=30;
    private int area;
    private float perimetro;
    
        
    public int getbase() {
        return base;
    }
      
    public void setbase(int base) {
        this.base = base;
    }
    
    public int getAltura() {
        return altura;
    }
    
    public void setAltura(int altura) {
        this.altura = altura;
    }
    
    public void calculoarea(){
    area = base*altura;
    }
    
   
    public void calcularperimetro(){
        perimetro=
    }
    
    
    
    
    
    
    
    
    
    
    
   
    
    public void calculoperimetro(){ 
    perimetro = 2*base+2*altura;
   }
    
    
    
 
     public int getArea() {
        
         calculoarea();
         
         return area;
    }
      public void setArea(int area) {
        this.area = area;
    }

     

    public float getPerimetro() {
        calculoperimetro();
        return perimetro;
    }

    public void setPerimetro(float perimetro) {
        this.perimetro = perimetro;
    } 
    
}

    public class RectanguloNuevo {
  
    public static void main(String[] args) 
 {
    
    
    CambioRectangulo ObjetoRectangulo;
    ObjetoRectangulo = new CambioRectangulo( );
    
    ObjetoRectangulo.getbase();
    
    
   
   
    ObjetoRectangulo.getAltura();
    ObjetoRectangulo.setAltura(20);//La altura la pongo directamente
    
  
    ObjetoRectangulo.getArea();
   
    
    ObjetoRectangulo.getPerimetro();
     
        System.out.println("La base del rectangulo es:"+ObjetoRectangulo.getbase()+" y altura es:"+ObjetoRectangulo.getAltura());

     
    Scanner entrada = new Scanner(System.in);
    
    System.out.println("Digame la base del rectangulo: ");
    ObjetoRectangulo.setbase(entrada.nextInt());
   
     
    System.out.println("El area de un rectangulo de base "+ ObjetoRectangulo.getbase() +" y altura "+ObjetoRectangulo.getAltura()+" es igual a "+ObjetoRectangulo.getArea());
    System.out.println("El perimetro de un rectangulo de base "+ObjetoRectangulo.getbase()+" y altura "+ObjetoRectangulo.getAltura()+" es igual a "+ObjetoRectangulo.getPerimetro());

 }   
}





