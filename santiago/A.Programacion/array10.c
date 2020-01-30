#include<stdio.h>
int main()
{
	int viviendas[4][6];
	int contador;
	int contador2;
	char letras[4]={'A','B','C','D'};
	int habitantes;
	int piso[4];
	int puerta;
	int puerta2;
	
	contador=0;
	contador2=0;
	habitantes=0;
	puerta=0;
	puerta2=0;
	
	
	for(contador=0; contador<4; contador++)
	{
		for(contador2=0; contador2<6; contador2++)
		{
			viviendas[contador][contador2]=0;
		}
	}
	
	for(contador=0; contador<4; contador++)
	{
		piso[contador]=0;
	}
	
	printf("Edificio3\n");
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
	{	for(contador2=0; contador2<6; contador2++)
		{
			piso[contador]=piso[contador]+viviendas[contador][contador2];	
		}
		contador++;
	}
	while(contador<4);
	
	contador=0;
	
	while(contador<4)
	{
		if(piso[contador]>puerta)
		{
			puerta=piso[contador];
			puerta2=contador;
		}
		contador++;
	}
	printf("Vivienda con mas habitantes puerta %c\n",letras[puerta2]);
}