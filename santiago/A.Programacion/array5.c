#include<stdio.h>
main()
{
	int alumnos[40];
	int contador;
	int notas;
	float media;
	int menor;
	int mayor;
	int opcion;
	
	contador=0;
	notas=0;
	media=0.0;
	menor=11;
	mayor=0;
	opcion=0;
	
	do
	{
		printf("Nota de alumno Num. %d\n",contador+1);
		scanf("%d",&alumnos[contador]);
	
		contador++;
	}
	while(contador<40);
	
	printf("Opciones:\n 1 Listar notas\n 2 Calcular la media\n 3 Calcular el menor\n 4 Calcular en mayor\n");
	scanf("%d",&opcion);
	
	if(opcion==1)
	{
		contador=0;
		for(contador=0; contador<40; contador++)
		{
			printf("Alumno Num. %d nota %d\n", contador+1, alumnos[contador]);
		}
	}
	
	if(opcion==2)
	{
		contador=0;
		for(contador=0; contador<40; contador++)
		{
		notas=notas+alumnos[contador];	
		}
		media=notas/40;
		printf("Media %f\n",media);
	}
	
	if(opcion==3)
	{
		contador=0;
		
		for(contador=0; contador<40; contador++)
		{
			if(menor>alumnos[contador])
			{
				menor=alumnos[contador];
			}
		}
	
		printf("Menor %d\n",menor);
	}
	
	if(opcion==4)
	{
		contador=0;
		
		for(contador=0; contador<40; contador++)
		{
			if(mayor<alumnos[contador])
			{
				mayor=alumnos[contador];
			}
		}
		
		printf("Mayor %d\n",mayor);
	}
}