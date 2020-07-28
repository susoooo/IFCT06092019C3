/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.representacion_de_persona;

import java.util.Scanner;
/**
 *
 * @author Usuario
 */
public class EjercicioO1b {
    static int arg[];
    static String arg2[];
    
    public static void main(String []args){      
        
        int oficio, c=0;
        
        Scanner in = new Scanner(System.in);
        System.out.println("Indique su oficio\n 1 Persona no asalariada\n 2 Persona asalariada");
        System.out.println(" 3 Dos personas asalariadas\n 4 Persona dedicada a la medicina\n");
        oficio = in.nextInt(); in.nextLine();
           
        EjercicioO1b obje;
        obje = new EjercicioO1b();
        
            obje.datos();
        
            if(oficio==1){                
                persona objnoasalariado;
                objnoasalariado = new persona(arg[0], arg2[0], arg2[1], arg2[2], arg[1], arg2[3], arg2[4]);
            }
            
            if(oficio==2 && oficio==3){
                asalariado objasalariado;
                objasalariado = new asalariado(arg[0], arg2[0], arg2[1], arg2[2], arg[1], arg2[3], arg2[4]);                                        
                objasalariado.salario();
                objasalariado.msalario();
            }
            
            if(oficio==3){
                asalariado objasalariado2;
                objasalariado2 = new asalariado(arg[0], arg2[0], arg2[1], arg2[2], arg[1], arg2[3], arg2[4]);                                        
                objasalariado2.salario();
                objasalariado2.msalario();
            }
            
            if(oficio==4){
                medico objmedi;
                objmedi = new medico();
                objmedi.salario();
                objmedi.msalario();
            }
                                          
}
    
    public void datos(){
        arg = new int[2];
        arg2 = new String[5];
        Scanner in = new Scanner(System.in);
        System.out.println("Introducca su DNI");
                arg[0] = in.nextInt(); in.nextLine();

            System.out.println("Introducca su Nombre");
                arg2[0] = in.nextLine();

            System.out.println("Introducca su 1º Apellido");
                arg2[1] = in.nextLine();

            System.out.println("Introducca su 2º Apellido");
                arg2[2] = in.nextLine();

            System.out.println("Introducca su Fecha de nacimento");
                arg[1] = in.nextInt(); in.nextLine();

            System.out.println("Introducca su Lugar de nacimento");
                arg2[3] = in.nextLine();

            System.out.println("Introducca su País de nacimento");
                arg2[4] = in.nextLine();
    }
}

class persona{
    String nombre = " ";
    String apellido = " ";
    String apellido2 = " ";
    int Fecha = 0;
    String Lugar = " ";
    String Pais =" ";
    int DNI = 0;
    
    persona(){

    }
    
    persona(int d){
        DNI=d;
    }
    
    persona(String n, String a,String b){
        nombre=n;
        apellido=a;
        apellido2=b;
    }
    
    persona(int d,String n, String a, String b){
        DNI=d;
        nombre=n;
        apellido=a;
        apellido2=b;
    }
    persona(int d,String n, String a,String b,int f, String l, String p){
        DNI=d;
        nombre=n;
        apellido=a;
        apellido2=b;
        Fecha=f;
        Lugar=l;
        Pais=p;
        //TODO eliminar la linea prinln una vez comprobado el funcionamiento del constructor
        System.out.println(DNI +nombre +apellido +apellido2 +Fecha +Lugar +Pais);
    }
}   
class asalariado extends persona{
    Float sueldo;
    Float retencion;
    Scanner in;

    asalariado(){
    in = new Scanner(System.in);
    }
    asalariado(int d,String n, String a,String b,int f, String l, String p){
        super(d, n, a, b, f, l, p);
    in = new Scanner(System.in);
    }

    public void salario(){
    System.out.println("Introducca su sueldo");

            sueldo = in.nextFloat();

        System.out.println("Introducca su retencion");

            retencion = in.nextFloat();

    }

    public void msalario(){
        System.out.println("Su salario es " +sueldo);
        System.out.println("Su retencion es " +retencion);
    }
}

class obrero extends asalariado{
    String cargo;

    obrero(){
     System.out.println("Introducca su cargo");
     cargo = in.nextLine();
    }
}

class medico extends asalariado{
    int pacientes;
    int enfermos;
    int muertos;
    int covid19;

    medico(){
    System.out.println("Introducca el numero de pacientes a su cargo");
    pacientes = in.nextInt();
    System.out.println("Introducca el numero de enfermos a su cargo");
    enfermos = in.nextInt();
    System.out.println("Introducca el numero de muertos por COVID-19");
    muertos = in.nextInt();
    System.out.println("Introducca el numero de enfermos de COVID-19 a su cargo");
    covid19 = in.nextInt();
    }
}  

