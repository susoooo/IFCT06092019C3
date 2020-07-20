/* Ejercicio 2
La forma para calcular cuantas maneras diferentes tengo para elegir r cosas distintas de un conjunto de n cosas es:
C(n,r) = n!/(r!*(n-r)!)
Donde la función factorial se define como
n! = n *(n-1)*(n-2)*…*2*1
Escribir un programa que, utilizando funciones recursivas, pida n y r y devuelva C(n,r) */

#include <stdio.h>

int resta(int n, int r){
	int restA;
	restA=n-r;
	return(restA);
}

int factorial(int num)
{
	int contador;
	int factoriaL;
	factoriaL=1;
	contador=abs(num);
	while(contador!=1)
	{
	factoriaL=num*(contador-1);
	num=factoriaL;
	contador--;
    printf("%d", contador);
	}
	return(factoriaL);
}

float calcular_formas(int n, int r, int resta)
{
	float cformas;
	cformas=(float)(n/(r*resta));
	return(cformas);
}

void main(){
int n;
int r;
int resul_resta;
int fn;
int fr;
int fresta;
float total_formas;
n=0;
r=0;

printf("Introduce el valor 'n' del conjunto");
scanf("%d", &n);
printf("Introduce el valor 'r' de formas de elegir");
scanf("%d", &r);
// Restamos
resul_resta=resta(n,r);
// Calculamos factoriales
fresta=factorial(resul_resta);
fn=factorial(n);
fr=factorial(r);
total_formas=calcular_formas(fn, fr, fresta);

printf("Hay %0.2f formas distintas de hacer %d cosas\n", total_formas, n);

}

