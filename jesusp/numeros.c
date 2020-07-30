#include <stdio.h>

main(){
int numero1;
int numero2;
int numero3;
numero1=0;
numero2=0;
numero3=0;

printf("Hola soy Numeros.com\n");
printf("Version 2.0 \n");
printf("Dame el numero1:");
scanf("%d", &numero1);
printf("Dame el numero2:");
scanf("%d", &numero2);
printf("Dame el numero3:");
scanf("%d", &numero3);
	if(numero1>numero2 && numero1>numero3 && numero2>numero3){
		printf("Numero1 es el mayor, el segundo es numero2 y  numero3 es el menor");
	}else{
		if(numero1>numero2 && numero1>numero3 && numero3>numero2){
			printf("Numero1 es el mayor, el segundo es numero3 y  numero2 es el menor");
			}else{
				if(numero2>numero1 && numero2>numero3 && numero3>numero1){
			printf("Numero2 es el mayor, el segundo es numero3 y el numero1 es el menor");
				}else{
				if(numero2>numero1 && numero1>numero3 && numero2>numero3){
				printf("Numero2 es el mayor, el segundo es numero1 y el numero3 es el menor");
				}else{
					if(numero3>numero1 && numero3>numero2 && numero1>numero2){
					printf("Numero3 es el mayor, el segundo es numero1 y el numero2 es el menor");
				}else{
					if(numero3>numero2 && numero3>numero1 && numero2>numero1){
					printf("Numero3 es el mayor, el segundo es numero2 y el numero1 es el menor");
				}
				}
				}
				}
			}
		}
}