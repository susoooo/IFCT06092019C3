#include <stdio.h>

main()
{
 int radio;
 float pi;
 float perimetro;
 float area;
 float volumen;
 radio=0;
 pi=3.1416;
 perimetro=0.0;
 area=0.0;
 volumen=0.0;

 printf("El radio de la circunferencia:");
 scanf("%d", &radio);
 
 perimetro=2*pi*radio;
 area=pi*(radio*radio);
 volumen=4*pi*(radio*radio*radio)/3;
 printf("El perimetro es:");
 printf("%f", perimetro);
 printf("\n El area es:");
 printf("%f", area);
 printf("\n El volumen es:");
 printf("%f", volumen);
 
}