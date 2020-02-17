
#include <stdio.h>
#include <stdlib.h>

main()
{
	int opcion;
	char *puntero;
	
	int contador;
	int contador2;
	
	contador=0;
	
	puntero= (char *) malloc(sizeof (char));
	
	do
	
	{
		printf("\nIntroduzca un caracter: ");
		scanf("%c", (puntero + contador));
		getchar();
		
		printf ("\nDesea introducir más caracteres (S=1/N=0)");
		scanf("%d", &opcion);
		
		getchar();
		
		if(opcion==1)
			
		{
			contador++;
			
			puntero= (char *) realloc(puntero, sizeof(char) * contador );
		    printf("%X",*puntero);
		}
	}
	while(opcion!=0 && contador<10);
	
		for(contador2=0;contador2<=contador;contador2++)
			
			{
				printf("%c, ", *(puntero+contador2));
			}
		
}