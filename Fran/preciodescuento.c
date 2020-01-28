#include <stdio.h>

main()
{
	int precio;
	float descuento;
	float preciofinal;
	
	precio = 0;
	descuento = 0.0;
	
	preciofinal = 0.0;
	
	printf("Calculo de descuentos.\n");
	printf("Version 1.0\n\n");
	
	printf("Introduzca el precio: ");
	scanf("%d", &precio);
	
	printf("Introduzca el descuento: ");
	scanf("%f", &descuento);
	
	preciofinal = (float) (precio - (precio * descuento / 100));
	
	printf("\nEl precio final, una vez aplicado el descuento es de: %f euros.", preciofinal);
	
}