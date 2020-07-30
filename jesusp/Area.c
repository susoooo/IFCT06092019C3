#include <stdio.h>
#include <math.h>

main(){
float base;
int altura;
float triangulo;
float rectangulo;
float trapecio;
int opcion;
int ladosup;
float ladoinf;

base=0.0;
altura=0;
triangulo=0.0;
trapecio=0.0;
rectangulo=0.0;
opcion=0;
ladosup=0;
ladoinf=0.0;

printf("Bievanid@ a area.com\n");

printf("Dame la altura:");
scanf("%d", &altura);
printf("Dame una opcion:");
scanf("%d", &opcion);
if(opcion==1){
	printf("Dame la base:");
	scanf("%f", &base);
	triangulo=base*altura/2;
	printf("\n El area del triangulo es:");
	printf("%f", triangulo);
	}else{
		if(opcion==2){
			printf("Dame el lado superior:");
			scanf("%d", &ladosup);
			printf("Dame el lado inferior:");
			scanf("%f", &ladoinf);
			trapecio=altura*(ladosup+ladoinf/2);
			printf("\n El area del trapecio es:");
			printf("%f", trapecio);
		}else{
			if(opcion==3){
			printf("Dame la base:");
			scanf("%f", &base);
			rectangulo=base*altura;
			printf("\n El area del rectangulo es:");
			printf("%f", rectangulo);
			}else{
				printf("Errorr...");
			}
		}
	}
}