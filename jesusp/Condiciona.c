#include <stdio.h>

main()
{
int numero;
numero = 0;

printf("Bienvenid@s a condiciona v. 0.0\n");
printf("Introduce un numero:\n");
scanf("%d", &numero);
printf("Calculando..\n");

if(numero == 1){
	printf("Estas listo para jugar\n");
}
else{
	if(numero == 2){
 		printf("Vete a estudiar\n");
		}else{
		printf("Error, numero equivocado\n");		
			}

		
	}
printf("Fin del programa, adios");
}