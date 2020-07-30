#include <stdio.h>

main()
{
 int lado1;
 int lado2;
 int perimetro;
 int area;
 lado1=0;
 lado2=0;
 perimetro=0;
 area=0;
 printf("Los lados verticales:");
 scanf("%d", &lado1);
 printf("Los lados horizontales:");
 scanf("%d", &lado2);
 perimetro=(lado1+lado1)+(lado2+lado2);
 area=lado1*lado2;
 printf("El perimetro es:");
 printf("%d", perimetro);
 printf("\n El area es:");
 printf("%d", area);
 
}