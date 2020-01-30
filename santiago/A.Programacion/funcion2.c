#include<stdio.h>
#define RATIOCONVERSION 1.17

int saludo()
{
	printf("Conversor de euros a dolares");
	return(0);
}

float introduccion()
{
	float euros;
	euros=0;
	
	scanf("%f",&euros);
	return(euros);
}

float multiplicacion(float euros)
{
	
	float dolares;
	
	dolares=0;
	
	dolares=euros*RATIOCONVERSION;
	return(dolares);
}

int main()
{
	float nresultado;
	float resultado;
	
	resultado=0;
	saludo();
	nresultado=introduccion();
	resultado=multiplicacion(nresultado);
	printf("%f",resultado);
	
	return(0);
}