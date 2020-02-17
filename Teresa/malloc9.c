
/*9 repetir el 7 con numeros reales*/

#include<stdio.h>
 #include<stdlib.h>
 
 main()
 {
	 
	float *puntero;
	int contador;
	int contador2;
	int opcion;
	
	
	contador=0;
	puntero= (float*) malloc(sizeof (int));
	
	do
	
	{
		 
		printf("\nIntroduzca un numero: ");
		scanf("%f",(puntero+contador));
		getchar();
		
		do
		{
		printf("\nDesea introducir mas numeros (S=1/N=0): ");
		scanf("%d",&opcion);
		getchar();
		}
		while(opcion!=0 && opcion!=1);
		
	
		
		
		if (opcion==1)
			
		{
					
			contador++;
				
			puntero= (float *) realloc(puntero, sizeof(int) * contador);
				
		}
	}
	while (opcion!=0);
		
	{
		for (contador2=0;contador2<=contador; contador2++)
		{
			printf("\n%.2f", *(puntero+ contador2));
		}
				
	}
	 
 }