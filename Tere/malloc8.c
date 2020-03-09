
 
 #include<stdio.h>
 #include<stdlib.h>
 
 main()
 {
	 
	int *puntero;
	int contador;
	int contador2;
	int opcion;
	
	
	contador=0;
	puntero= (int*) malloc(sizeof (int));
	
	do
	
	{
		 
		printf("\nIntroduzca un numero entero: ");
		scanf("%d",(puntero+contador));
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
				
			puntero= (int *) realloc(puntero, sizeof(int) * contador);
				
		}
	}
	while (opcion!=0);
		
	{
		for (contador2=0;contador2<=contador; contador2++)
		{
			printf("\n%d", *(puntero+ contador2));
		}
				
	}
	 
 }