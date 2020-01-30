// Problema de las N reinas
// ------------------------

// Algoritmo recursivo
//
// 0. Obviamente, colocaremos una reina en cada fila
//
// 1. Se coloca una reina en una casilla de su fila y,
//    a continuaci�n, se intentan colocar las reinas restantes.
//
// 2. Si las dem�s reinas no se pueden colocar con �xito,
//    probamos a colocar la reina actual en otra columna.
//
// Caso base: Cuando no quedan reinas por colocar.


#include <stdio.h>
#include <stdlib.h>

// Constantes simb�licas

#define TRUE  1
#define FALSE 0


// Comprobar si una reina est� bien colocada
// -----------------------------------------
// La reina de la fila i est� bien colocada si no est�
// en la columna ni en la misma diagonal que cualquiera
// de las reinas de las filas anteriores
//
// Par�metros
//   fila   - Fila de la reina cuya posici�n queremos validar
//   reinas - Vector con las posiciones de las reinas
//   n      - N�mero de reinas


int comprobar (int fila, int reinas[], int n) 
{
  int i;

  for (i=0; i<fila; i++)
      if (  ( reinas[i]==reinas[fila] )                      // Misma columna
         || ( abs(fila-i) == abs(reinas[fila]-reinas[i]) ) ) // Misma diagonal
         return FALSE;

  return TRUE;
}


// Colocaci�n de una reina
// -----------------------
// Par�metros
//   fila   - Fila de la reina que queremos colocar
//   reinas - Vector con las posiciones de las reinas
//   n      - N�mero de reinas
// Resultado
//   TRUE si se coloca correctamente la reina
//   FALSE si no se ha podido colocar la reina

int colocarReina (int fila, int reinas[], int n)
{
  int ok = FALSE;

  if (fila<n) {

     // Quedan reinas por colocar

     while ((reinas[fila]<n-1) && !ok) {

           // Colocamos la reina en la siguiente columna
           
           reinas[fila]++;

           // Comprobamos si la posici�n 
           // de la reina actual es v�lida

           if (comprobar(fila,reinas,n)) {

              // Si es as�, intentamos colocar
              // las reinas restantes

              ok = colocarReina (fila+1, reinas, n);
           }
     } 

     if (!ok) {
        // Si no se han podido colocar las dem�s reinas
        // con la reina actual donde est�, la quitamos
        reinas[fila] = -1;
     } 
  
  } else {

     // No quedan reinas por colocar (caso base)

     ok = TRUE;
  }

  return ok;
}



// Mostrar el tablero con las reinas
// ---------------------------------
// Par�metros:
//   reinas - Vector con las posiciones de las distintas reinas
//   n      - N�mero de reinas

void mostrarTablero (int reinas[], int n)
{
  int i,j;

  for (i=0; i<n; i++) {

      for (j=0; j<n; j++) {

          if (reinas[i]==j)
             printf("#");
          else
             printf("-");
      }

      printf(" %d %d\n",i,reinas[i]);
  }
}

// Mostrar informaci�n acerca del uso del programa
// -----------------------------------------------
// Par�metro:
//   programa - Nombre del programa

void mostrarAyuda (char *programa)
{
  printf("Uso del programa:\n");
  printf("\n");
  printf("  %s <n>\n", programa);
  printf("\n");
  printf("donde <n> es el n�mero de reinas que deseamos colocar (un m�nimo de 4).\n");
  printf("\n");
}

// Programa principal
// ------------------

void main (int argc, char *argv[])
{
  int *reinas;  // Vector con las posiciones de las reinas de cada fila
  int nreinas;  // N�mero de reinas
  int i;        // Contador


  // Leer n�mero de reinas 
  // (par�metro del programa)

  nreinas = -1;

  if (argc==2) 
     nreinas = atoi(argv[1]);


  // Colocar las reinas en el tablero

  if (nreinas>0) {

      // Crear vector din�micamente

      reinas = (int*) malloc ( nreinas*sizeof(int) );

      // Inicializar vector:
      // (inicialmente, ninguna reina est� colocada)

      for (i=0; i<nreinas; i++)
          reinas[i] = -1;

      // Colocar reinas (algoritmo recursivo)

      colocarReina(0,reinas,nreinas);

      // Mostrar resultado

      mostrarTablero(reinas,nreinas);

      // Liberar memoria

      free (reinas);
  
  } else {

      mostrarAyuda(argv[0]);

  }
}
