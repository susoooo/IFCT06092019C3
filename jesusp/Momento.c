#include <stdio.h>

main()
{
 int momento;
 int sexo;

 momento=0;
 sexo=0;
 
 
 printf("Hola, soy Momento.com\n");
 printf("version 2.0 \n");
 printf("Dame un momento: 1 manana, 2 tarde , 3 noche:",momento);
 scanf("%d", &momento);
 printf("Dime tu sexo: 1 hombre , 2 mujer:",sexo);
 scanf("%d", &sexo); 

	if(momento==1 && sexo==1){ 		
		printf("\n Buenos dias, senor ", momento,sexo);
		}else{
			if(momento==1 && sexo==2){ 		
		printf("\n Buenos dias, senora ", momento,sexo);
		}else{
			if(momento==2 && sexo==1){ 		
		printf("\n Buenas tardes, senor ", momento,sexo);
		}else{
			if(momento==2 && sexo==2){ 		
		printf("\n Buenos tardes, senora ", momento,sexo);
		}else{
			if(momento==3 && sexo==1){ 		
		printf("\n Buenas noches, senor ", momento,sexo);
		}else{
			if(momento==3 && sexo==2){ 		
		printf("\n Buenas noches, senora ", momento,sexo);
		}else{
			printf("Errorr...");
			}
			}
                        }
			}
			}




}
			
 	
 printf("\n  Hasta Luego");
	
}