#include <stdio.h>

main()
{
	int lado1;
	int lado2;
	int area;
	int perimetro;
	
	lado1 = 0;
	lado2 = 0;
	area = 0;
	perimetro = 0;
		
	printf("Calculo de area y perimetro de un rectangulo.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca la longitud del primer lado: ");
	scanf("%d", &lado1);
	
	printf("\nIntroduzca la longitud del segundo lado: ");
	scanf("%d", &lado2);
	
	area = lado1 * lado2;
	perimetro = (lado1 + lado2)*2;
	
	printf("El area del rectangulo es: %d\n", area);
	printf("El perimetro del rectangulo es: %d\n", perimetro);
	
	printf("\n\nFin de programa, saludos terricola!!\n.");
	
}