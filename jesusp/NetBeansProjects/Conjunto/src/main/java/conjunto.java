
import java.io.IOException;
import java.io.PrintStream;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Usuario
 */
public class conjunto {
    public static void main(String[] args) throws IOException
    {
        float notas[];
        notas = new float[40];
int contador = 0;
float suma = 0;
float media;
float mayor;
float menor;
media = (float) 0.0;
mayor =  (float) 0.0;
menor = 10;

for(contador=0;contador<40; contador++)
	{
		notas[contador]=(float) (Math.random()%11)*10;
                PrintStream printf = System.out.printf("Notas:%.2f\n", notas[contador]);
		suma=suma+notas[contador];
		if(notas[contador]> mayor)
		{
			mayor=notas[contador];
		}
		if(notas[contador]< menor)
		{
			menor=notas[contador];
		}
	}
	media=suma/40;
	System.out.printf("La media es: %.2f", media);
	System.out.printf("\n La mejor nota es: %.2f", mayor);
	System.out.printf("\n La peor nota es: %.2f", menor);
    }

    

   
    
}
