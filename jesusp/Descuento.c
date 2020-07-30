#include <stdio.h>

main()
{
 int precio;
 float descuento;
 float preciofinal;
 precio=0;
 descuento=0.0;
 preciofinal=0.0;

 printf("Dame un precio:");
 scanf("%d", &precio);
 printf("Dame el descuento:");
 scanf("%f", &descuento);
 preciofinal=(float)precio-(precio*descuento/100);
 printf("El precio final es=");
 printf("%f", preciofinal);
}