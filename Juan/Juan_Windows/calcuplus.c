#include <stdio.h>

void main(){
// Declaración.
int numero1;
int numero2;
int suma;
int resta;
int producto;
float division;
// Inicialización.
numero1=0;
numero2=0;
suma=0;
resta=0;
producto=0.0;
division=0.0;
// Cálculo.
printf("Bienvenido a calcuplus\n");
printf("Introduce el valor del primer número ");
scanf("%d",&numero1);
printf("Introduce el valor del segundo número ");
scanf("%d",&numero2);
suma=numero1+numero2;
resta=numero1-numero2;
producto=numero1*numero2;
division=(float)numero1/(float)numero2;
printf("La suma es: %d\n",suma);
printf("La resta es: %d\n",resta);
printf("La multiplicación es: %d\n",producto);
printf("La división es: %0.2f\n",division);
}
