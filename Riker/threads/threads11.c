/* 3.Calcula el número pi utilizando el método de montecarlo y utiliza threads para calcular los puntos y si están dentro o fuera del círculo. (Método de montecarlo: https://www.geogebra.org/m/cF7RwK3H) */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <math.h>

#define SIDE 4
#define RADIUS SIDE/2

struct Point {
  float x;
  float y;
};

struct Range {
  int from;
  int to;
};

struct Point *points;

int number_of_points;

float distanceBetweenTwoPoints(struct Point pointA, struct Point pointB);
void * generatePoints(void * p);
void * howManyInside(void * r);
void printfArray(struct Point *points);

int main() {
  pthread_t generate_thread;
  struct Range range;
  int *total;
  float Pi;

  total = malloc(sizeof(int));

  /* randomness seed */
  srand(time(NULL));

  /* how many points */
  printf("Points? ");
  scanf("%d", &number_of_points);

  /* allocate Points memory */
  points = (struct Point *)malloc(sizeof(struct Point)*number_of_points);

  /* generate points */
  pthread_create(&generate_thread, NULL, generatePoints, (void *) points);
  pthread_join(generate_thread, NULL);

  /* inside circle points */
  range.from = 0;
  range.to = number_of_points;

  *total = 0;
  pthread_create(&generate_thread, NULL, howManyInside, (void *) &range);
  pthread_join(generate_thread, (void *) &total);

  Pi = (*total*(float)SIDE*(float)SIDE)/(float)(number_of_points*RADIUS*RADIUS);

  printf("Pi: %f", Pi);

  return 0;
}


float distanceBetweenTwoPoints(struct Point pointA, struct Point pointB){
  float distance;

  distance = sqrt(pow((pointB.x-pointA.x),2)+(pow((pointB.y-pointA.y),2)));

  return distance;
}

void * generatePoints(void * p){
  struct Point *points = (struct Point *) p;
  int counter;
  float diagonal;

  diagonal = sqrt((SIDE*SIDE)+(SIDE*SIDE));

  for (counter=0; counter<number_of_points; counter++) {
    (points+counter)->x = (float)rand()/(float)(RAND_MAX/SIDE) - RADIUS;
    (points+counter)->y = (float)rand()/(float)(RAND_MAX/SIDE) - RADIUS;
  }

  pthread_exit(NULL);
}

void * howManyInside(void * r){
  struct Range *range = (struct Range *) r;
  struct Point origin;
  int counter;
  int *total;
  float distance;

  total = malloc(sizeof(int));

  origin.x = 0;
  origin.y = 0;
  *total = 0;
  for (counter=range->from; counter < range->to ; counter++) {
    distance = distanceBetweenTwoPoints(origin, *(points+counter));
    if(distance < RADIUS){
      *total = *total + 1;
    }
  }

  pthread_exit((void *) total);
}


void printfArray(struct Point *points){
  int counter;
  for (counter=0; counter<number_of_points; counter++) {
    printf("P[%3d]: (%f, %f)\n", counter, (points+counter)->x, (points+counter)->y);
  }
}
