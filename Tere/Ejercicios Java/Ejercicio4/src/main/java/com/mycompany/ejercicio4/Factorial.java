import java.util.Scanner;
public class Factorial {
    

    public static void main(String[] args) {
        
  
        Scanner teclado=new Scanner(System.in);
        
        System.out.println("Dame un numero ");
        
        int num1=1;
        int num2=1;
        int num3=1;
        
        num1=teclado.nextInt();
        
        for (int i = num1; i > 0; i--)
        {
        
            num3=num3*i;
        
       
        }
        System.out.println("El factorial del " + num1 + " es: " + num3);
            }
                } 