#include <stdio.h>

main()
{
 int numero1;
 int numero2;
 int numero3;
 int par;
 int impar;
 

 numero1=0;
 numero2=0;
 numero3=0;
 par=0;
 impar=0;
 printf("Hola, soy ParImpar.com\n");
 printf("version 2.0 \n");
 printf("El primer numero:",numero1);
 scanf("%d", &numero1);
 printf("El segundo numero:",numero2);
 scanf("%d", &numero2);
 printf("El segundo numero:",numero3);
 scanf("%d", &numero3);

	if(numero1%2==0){
 		
		printf("\n Numero1 es par ", par);
		}else{				
			printf("\n Numero1 es impar", impar);
		      }
 
 	if(numero2%2==0){
 		
		printf("\n Numero2 es par ", par);
		}else{				
			printf("\n Numero2 es impar ", impar);
		      }
	if(numero3%2==0){
 		
		printf("\n Numero3 es par ", par);
		}else{				
			printf("\n Numero3 es impar ", impar);
		      }
 printf("\n  Hasta Luego");
	
}
