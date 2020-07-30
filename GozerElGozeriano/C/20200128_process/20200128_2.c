/*
2.Un proceso (raíz) que solicite un número entero N entre 3 y 21, y con dicho número
genere un arreglo de N elementos en donde el contenido del arreglo será el número que
le corresponde en el arreglo; por ejemplo, para N = 10, tendríamos el siguiente arreglo:
0 1 2 3 4 5 6 7 8 9
El proceso raíz deberá crear tres procesos hijos, cada uno de los cuales tendrá acceso a
una parte del arreglo (usted define qué sección del arreglo), deberá sumar los elementos
del arreglo que le corresponden (que desde luego son arreglos disjuntos), y enviar el
resultado al proceso padre para que este finalmente imprima el resultado.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MAXCHILDREN 3 // edits number of forks
#define DEBUG 0


int getNumber()
{
	int number;
	number=0;
	do
	{
		printf("Introduce número entre %d y %d: ", MAXCHILDREN, MAXCHILDREN*7);
		scanf("%d",&number);
	}while(number<MAXCHILDREN||number>MAXCHILDREN*7);
	return(number);
}

int getcount(int number)
{
	if(number%MAXCHILDREN==0) return(number);
	return(number+(MAXCHILDREN - number%MAXCHILDREN));	
}


int main(void)
{
	int number;
	int numbers[MAXCHILDREN*7];
	pid_t sons[MAXCHILDREN];
	int contador;
	int fatherpid;
	int index;
	int countxfork;
	int sum;

	sum=0;
	fatherpid=getpid();
	if(DEBUG) printf("Father PID: %d\n",fatherpid);
	number = getNumber();
	countxfork=getcount(number);
	for(contador=0;contador<number;contador++)
		numbers[contador]=contador;
	for(contador=0;contador<MAXCHILDREN;contador++)
	{
		if(getpid()==fatherpid)
		{
			sons[contador]=fork();
			switch(sons[contador])
			{
				case -1:
					printf("\nERROR\n"); break;
				case 0:
					printf("Valores: ");
					if(contador<MAXCHILDREN-1)
						for(index=(countxfork/MAXCHILDREN)*contador;index<(countxfork/MAXCHILDREN)*(contador+1);index++)
						{
							printf("%d",numbers[index]);
							sum = sum+numbers[index];
							if(index<((countxfork/MAXCHILDREN)*(contador+1)-1)) printf("+");
						}
					else
						for(index=(countxfork/MAXCHILDREN)*contador;index<number;index++)
						{
							printf("%d",numbers[index]);
							sum = sum+numbers[index];
							if(index<number-1)
								printf("+");
						}
					printf(" = %d\n",sum);
					break;
				default:
					if(contador==(MAXCHILDREN-1))
						sleep(2);
			}
		}
	}

	if(DEBUG) printf("%d ends\n",getpid());
	
	exit(0);
}
