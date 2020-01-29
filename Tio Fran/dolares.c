#include <stdio.h>
#include <stdlib.h>

int conversor()
{
	float dolares;
	
	printf("\nIntroduzca el numero de euros a convertir: ");
	scanf("%f",&euros);
	
	dolares = (euros / 1.17);
	
	printf("\n%.2f euros son %.2f dolares.", euros, dolares);
	
	return (0);
	
}

int main()
{
	conversor()	;
	
	printf("\nGracias por usar nuestro software... matao!!");
	
	return(0);	

}