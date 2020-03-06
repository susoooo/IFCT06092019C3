/* 
3.Calcula el número pi utilizando el método de montecarlo y utiliza threads para
* calcular los puntos y si están dentro o fuera del círculo.
* (Método de montecarlo: https://www.geogebra.org/m/cF7RwK3H) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <float.h>
#define RADIO 2.0f
#define SIDE 4.0f
#define CCENTER 2.0f
#define DEBUG 0

struct point
{
	double x;
	double y;
	int inCircle;
};

void * getRandomPoint(void * args)
{
	struct point *p;
	p=(struct point *)args;
	double a = SIDE;
	p->x=((double)rand()/(double)(RAND_MAX)) * a;
	p->y=((double)rand()/(double)(RAND_MAX)) * a;
	
	if((p->x - CCENTER) * (p->x - CCENTER) +
	   (p->y - CCENTER) * (p->y - CCENTER) <= RADIO * RADIO)
		p->inCircle = 1;
	else
		p->inCircle = 0;

	pthread_exit(NULL);
}


int main(int argc, char * argv[])
{
	if(argc<2)
	{
		printf("ERROR\n");
		return(1);
	}

	int nTries;
	nTries = atoi(argv[1]);
	
	if(DEBUG) printf("Puntos: %d\n",nTries);
	int Digs = DECIMAL_DIG;
	
	pthread_t h[nTries];
	struct point points[nTries];
	int contador;
	int inCircle;
	
	inCircle=0;
	srand((unsigned int)time(NULL));
	
	for(contador=0;contador<nTries;contador++)
		pthread_create(&h[contador],NULL,getRandomPoint,(void *)&points[contador]);
	
	for(contador=0;contador<nTries;contador++)
		pthread_join(h[contador],NULL);
	
	if(DEBUG)
		for(contador=0;contador<nTries;contador++)
			printf("%5d-> X = %f Y = %f inside=%d\n",contador,points[contador].x,points[contador].y,points[contador].inCircle);

	for(contador=0;contador<nTries;contador++)
		if(points[contador].inCircle) inCircle++;
		
	if(DEBUG) printf("Matchs inside circle : %d\n",inCircle);
		
	printf("PI = %.*e\n", Digs, (16.0*(double)inCircle)/(4.0*(double)nTries));
}
