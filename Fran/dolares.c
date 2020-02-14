<<<<<<< HEAD
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

=======
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

>>>>>>> 8bc0b13d6df47f49e7d86b65488d04536bd6d34b
}