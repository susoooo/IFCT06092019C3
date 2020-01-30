#include <stdio.h>
#include <pthread.h>

//compile with -lpthread at the end

struct arguments {
  int n1, n2;
  int* p_result; //more reliable to store results in struct 
};

//to use a function in a thread it should use void*
void* MyFunction(void* parametro) { //receive param as void pointer
  struct arguments Parametros; //declare variable you will use
  struct arguments* p_Parametros; //and a pointer to it
  int result;

  p_Parametros = (struct arguments*)parametro; //must cast to match the pointer type
  result = p_Parametros->n1 * p_Parametros->n2; //save value in pointer to your variable
  *(p_Parametros->p_result) = result; //load results into variable

  //return pointer to result, cast to void pointer
  pthread_exit((void*)(p_Parametros->p_result)); //better than return when parallelizing
}

int main() {
  pthread_t h1;
  struct arguments* Arguments;
  int thoutput;

  //create thread for MyFunction
  //last param is arg to pass to function
  //you can only pass one argument
  //so make a struct to pass everything you need
  Arguments = malloc(sizeof(struct arguments)); //size up struct
  Arguments->n1 = 8; //load up values
  Arguments->n2 = 6;
  pthread_create(&h1, NULL, MyFunction, (void*)Arguments); //create thread

  //wait for thread to end
  pthread_join(h1, NULL);
  thoutput = Arguments->p_result; //??? 
}
