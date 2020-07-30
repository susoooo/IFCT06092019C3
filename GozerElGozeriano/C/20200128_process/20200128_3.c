/*
3.Elabore un programa que genere un árbol no balanceado de procesos. El proceso padre
raíz deberá generar dos hijos, y estos a su vez deben generar más hijos de la siguiente
manera: los hijos del lado izquierdo van a generar un árbol binario en cambio los hijos del
lado derecho van a generar un árbol de tres hijos; ver fig. 1.
Figura 1. Árbol no balanceado de procesos de nivel 2.
El proceso padre principal, deberá pedir el nivel hasta el cual se van a generar hijos. Cada
proceso le regresará su padre el número de hijos que ha engendrado, de tal forma que el
proceso padre raíz imprimirá el número de procesos creados; para la fig. 1, el número de
procesos es de 21. Para ver que efectivamente ha creado el árbol de procesos solicitado,
investigue el uso del comando ps de Linux.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define RPROGENIE 3
#define LPROGENIE 2

int maxLevel;

enum side {RIGHT, LEFT};
	
struct sonProp
{
	enum side mySide;
	int lvl;
	pid_t son;
};

int getNumLvls()
{
	int num;
	printf("Número de niveles: ");
	scanf("%d",&num);
	return(num);
}

void keepMySonBusy(struct sonProp prodigalSon)
{
	int contador;
	int childrenExpec;
	struct sonProp anotherSon;
	
	if(!prodigalSon.son)
	{
		for(contador=0;contador<prodigalSon.lvl;contador++)
			printf("\t");
		printf("Process %d working for my father %d on side %d in level %d\n",getpid(),getppid(),prodigalSon.mySide,prodigalSon.lvl);
		sleep(3);
		childrenExpec = RPROGENIE;
		if(prodigalSon.mySide == LEFT) childrenExpec = LPROGENIE;
		if(prodigalSon.lvl<maxLevel)
			for(contador=0;contador<childrenExpec;contador++)
			{
				anotherSon.mySide = prodigalSon.mySide;
				anotherSon.lvl = prodigalSon.lvl+1;
				anotherSon.son = fork();
				keepMySonBusy(anotherSon);
			}
		sleep(4);
		exit(0);
	}
}

int main(void)
{
	struct sonProp rightSon;
	struct sonProp leftSon;
	
	maxLevel=getNumLvls();
	
	rightSon.mySide = RIGHT;
	rightSon.lvl = 0;
	rightSon.son = fork();
	keepMySonBusy(rightSon);
	leftSon.lvl = 0;
	leftSon.mySide = LEFT;
	leftSon.son = fork();
	keepMySonBusy(leftSon);
	
	printf("All sons working\n");
	sleep(5*maxLevel);
	exit(0);
}
