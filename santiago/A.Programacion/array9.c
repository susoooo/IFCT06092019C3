#include<stdio.h>
int main()
{
	int viviendas[4][6];
	int contador;
	int contador2;
	char letras[4]={'A','B','C','D'};
	int habitantes;
	int piso;
	int piso2;
	int puerta[6];
	
	contador=0;
	contador2=0;
	habitantes=0;
	piso=0;
	piso2=0;
	
	for(contador=0; contador<4; contador++)
	{
		for(contador2=0; contador2<6; contador2++)
		{
			viviendas[contador][contador2]=0;
		}
	}
	
	for(contador=0; contador<6; contador++)
	{
		puerta[contador]=0;
	}
	
	printf("Edificio2\n");
	for(contador=0; contador<4; contador++)
	{
		for(contador2=0; contador2<6; contador2++)
		{
			printf("Habitantes piso %d puerta %c\n",contador2+1, letras[contador]);
			scanf("%d",&viviendas[contador][contador2]);
		}
	}
	
	contador2=0;
	
	do
	{	for(contador=0; contador<4; contador++)
		{
			puerta[contador2]=puerta[contador2]+viviendas[contador][contador2];	
		}
		contador2++;
	}
	while(contador2<6);
	
	contador=0;
	
	while(contador<6)
	{
		if(piso<puerta[contador])
		{
			piso=puerta[contador];
			piso2=contador;
		}
		contador++;
	}
	printf("Vivienda con mas habitantes piso %d\n",piso2+1);
}