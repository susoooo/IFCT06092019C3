/*
2.Escribir un programa que cree un proceso para calcular un factorial. El programa preguntará por pantalla el número del cual se quiere calcular el factorial, lo enviará por una tubería al proceso que ha creado, y esperará a que este le envía de vuelta el resultado del cálculo. Tras recibirlo, el programa imprimirá el resultado del cálculo.
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include <string.h>
#define DEBUG 0
#define INTSIZE 12

int factorial(int);

int main(void)
{
	int pp[2];
	int ppr[2];
	pid_t prPID;
	char num[INTSIZE];
	
	pipe(pp);
	pipe(ppr);
	prPID = fork();
	switch(prPID)
	{
		case -1:
			perror("KO"); exit(0);
			break;
		case 0:
			close(pp[1]);
			close(ppr[0]);
			read(pp[0],num,INTSIZE);
			if(DEBUG) printf("Número leído: '%d'\n",atoi(num));
			sprintf(num,"%d",factorial(atoi(num)));
			write(ppr[1],num,INTSIZE);
			break;
		default:
			close(pp[0]);
			close(ppr[1]);
			printf("Calcular factorial de: ");
			scanf("%s",num);
			write(pp[1],num,INTSIZE);
			read(ppr[0],num,INTSIZE);
			printf("Resultado: %s\n",num);
			usleep(500);
			break;
	}
	return(0);
}

int factorial(int num)
{
	if(num>1) return num*factorial(num-1);
	if(num==0) return 0;
	return 1;
}
