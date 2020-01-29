#include <stdio.h>
#include <stdlib.h>

struct fecha
{
	int dia;
	int mes;
	int anio;
}

struct personas
{
	char nombre[10];
	int edad;
	char sexo[6];
	float altura;
	float sueldo;
	struct fecha fechaNacimiento;
}

void main()
{
	char opcionMenu;
	
	
	printf("\nGestion de empleados");
	printf("\n1. Creacion archivo empleados.     ");
	printf("\n2. Introducir nuevo empleado.      ");
	printf("\n3. Modificar datos empleado.       ");
	printf("\n4. Dar baja a empleado (borrado).  ");
	printf("\n5. Dar baja a empleado (marcado).  ");
	printf("\n6. Eliminar archivo empleados.     ");
	printt("\n7. Busquedas.                      ");
	printf("\n0. Salir.                          ");
	
	scanf("%c", &opcionMenu);
	
	switch opcionMenu
	{
		case "1":
		
		break;
		
		case "2":
		
		break;
		
		case "3":
		
		break;
		
		case "4":
		
		break;
		
		case "5":
		
		break;
		
		case "6":
		
		break;
		
		case "7":
		
		break;
		
		default:
		
		break;
	}
	
}