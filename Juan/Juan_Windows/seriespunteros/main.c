#include <stdio.h>
#include <stdlib.h>


/*
2. Punteros y funciones
Escribir un programa que lea de teclado un número real x y el número de términos de la serie a sumar
(un número entero) n y calcule el resultado de:

	(1/x1) – (1/x2) + (1/x3) – (1/x4) + … (1/xn)

El cálculo debe realizarse dos veces, la primera vez mediante una función que no utiliza punteros, y la
segunda vez mediante una función equivalente que utiliza punteros. Los prototipos son:

double CalcularSerie(double x, int n){
}

void CalcularSeriePunt(double x, int n, double *resultado){
}
*/

double Potencia(double numero, int potenciA){
double totaL;
totaL=1;
for(int i=1;i<=potenciA;i++){
 totaL=totaL*numero;
}
return totaL;
}

double CalcularSerie(double x, int n)
{
    double resultado;
    resultado=0;

    for(int contador=1;contador<=n;contador=contador+2){
    resultado = resultado+(1/Potencia(x,contador));
    if(contador+1>(n))
       {
       }
    else
        {
        resultado=resultado-(1/Potencia(x,contador+1));
    }
    }
return resultado;
}


void CalcularSeriePunt(double x, int n, double *resultado){
double serie;

int * puntprioridad;
int prioridad;

punt1=4;
punt=&punt1;
puntprioridad
}

double Resultado(double x, int n){
for(int contador;contador<n;contador++){

}
}
}



int main()
{
double real;
int entero;

    printf("Introduce un numero real\n");
    scanf("%lf", &real);
    printf("Introduce un numero entero\n");
    scanf("%d", &entero);

    printf("La serie del número %f es: %lf", real, CalcularSerie(real,entero));
}
