#include<stdio.h>
main()
{
	int N_alumnos[100];
	int numero;
	float notas;
	int opcion;
	float media;
	int menor;
	int mayor;
	int contador;
	
	numero=0;
	notas=0;
	opcion=0;
	media=0;
	menor=11;
	mayor=0;
	contador=0;
	
	printf("Escriba numero de alumnos\n");
	scanf("%d",&numero);
	if(numero>100)
	{
		printf("error Num. maximo de alumnos es 100");
	}
	else
	{
		for(contador=0; contador<numero; contador++)
		{
			printf("Nota alumno Num. %d nota",contador+1);
			scanf("%d",&N_alumnos[contador]);
		}
		
		do
		{
			printf("Opcion: \n 1 Listar notas\n 2 Calcular la media\n 3 Calcular el menor\n 4 Calcular en mayor\n 5 Agregar nota\n 6 Salir\n");
			scanf("%d",&opcion);
			
			if(opcion==1)
			{
				contador=0;
				for(contador=0; contador<numero; contador++)
				{
					printf("Alumno Num. %d nota %d\n", contador+1, N_alumnos[contador]);
				}
			}
			
			if(opcion==2)
			{
				contador=0;
				for(contador=0; contador<numero; contador++)
				{
				notas=notas+N_alumnos[contador];	
				}
				media=notas/numero;
				printf("Media %f\n",media);
			}
			
			if(opcion==3)
			{
				contador=0;
				
				for(contador=0; contador<numero; contador++)
				{
					if(menor>N_alumnos[contador])
					{
						menor=N_alumnos[contador];
					}
				}
			
				printf("Menor %d\n",menor);
			}
			
			if(opcion==4)
			{
				contador=0;
				
				for(contador=0; contador<numero; contador++)
				{
					if(mayor<N_alumnos[contador])
					{
						mayor=N_alumnos[contador];
					}
				}
				
				printf("Mayor %d\n",mayor);
			}
			if(opcion==5)
			{
				numero=numero+1;
				printf("Nota alumno Num. %d nota",contador+1);
				scanf("%d",&N_alumnos[contador]);
			}
		
		}
		while(opcion<6);
	}
}