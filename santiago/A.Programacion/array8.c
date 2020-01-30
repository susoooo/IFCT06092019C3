#include<stdio.h>
int main()
{
	int viviendas[4][6];
	int contador;
	int contador2;
	char letras[4]={'A','B','C','D'};
	int habitantes;
	int piso;
	char puerta;
	
	contador=0;
	contador2=0;
	habitantes=0;
	piso=0;
	
	for(contador=0; contador<4; contador++)
	{
		for(contador2=0; contador2<6; contador2++)
		{
			viviendas[contador][contador2]=0;
		}
	}
	
	printf("Edificio1\n");
	for(contador=0; contador<4; contador++)
	{
		for(contador2=0; contador2<6; contador2++)
		{
			printf("Habitantes piso %d puerta %c\n",contador2+1, letras[contador]);
			scanf("%d",&viviendas[contador][contador2]);
		}
	}
	
	contador=0;
	
	do
	{
		for(contador2=0; contador2<6; contador2++)
		{
			if(viviendas[contador][contador2]>habitantes)
			{
				habitantes=viviendas[contador][contador2];
				piso=contador2;
				puerta=contador;
			}
		}
		contador++;
	}
	while(contador<4);
	
	printf("Vivienda con mas habitantes piso %d puerta %c\n",piso+1, letras[puerta]);
}