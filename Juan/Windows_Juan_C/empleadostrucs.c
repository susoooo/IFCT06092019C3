/* La información de todos los empleados de la empresa DATASYSTEM está almacenada en  una  variable  de  tipo  struct    llamada  “empleado”. 
La  información  con  que  se cuenta de cada empleado es: nombre, sexo y sueldo.
Se pide: Realizar un programa en C que lea en un array de estructuras los datos de 10 trabajadores de la empresa
 y que imprima los datos del empleado con mayor y menor salario */
 
#include <stdio.h>

struct empleado
{
	char nombre[15];
	char sexo[10];
	double sueldo;
	
} trabajadores[10];

struct empleado.mayor_sueldo[1];
struct empleado.menor_sueldo[1];

int main()
{
	int i;
	int mayor;
	int menor;
	mayor=0;
	menor=0;

	printf("Introduce los datos de los trabajadores /n");
	
	for(i=0;i<10;i++)
	{
		printf("Introduce el nombre del trabajador/a /n");
		scanf("%s", trabajadores[i].nombre);
		printf("Introduce el sexo del trabajador/a /n");
		scanf("%s", trabajadores[i].sexo);
		printf("Introduce el sueldo /n");
		scanf("%f", trabajadores[i].sueldo);
	}

	for(i=0;i<10;i++)
	{
		if(mayor<trabajadores[i].sueldo)
		{
			mayor=trabajadores[i].sueldo;
			nombre_mayor=trabajadores[i].nombre;
		}else
		{
			
		}
		if(menor>trabajadores[i].sueldo)
		{
			menor=trabajadores[i].sueldo;
			nombre_menor=trabajador[i].nombre;
		}else
		{
			if(menor==0)
			{
				menor=trabajadores[i].sueldo;
				nombre_menor=trabajador[i].nombre;
			}
		}
	}
	
}