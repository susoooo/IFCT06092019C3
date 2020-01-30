#include <stdio.h>

struct empleado
{
	char nombre[15];
	char sexo;
	float sueldo;
};

void medirSalarios(struct empleado listado[], float *max, float *min)
{
	*max = listado[0].sueldo;
	*min = listado[0].sueldo;

	for (int i = 0; i < 10; ++i)
		if (listado[i].sueldo > (*max))
			(*max) = listado[i].sueldo;
		else if (listado[i].sueldo < (*min))
			(*min) = listado[i].sueldo;
}

int main(int argc, char const *argv[])
{
	struct empleado listado[10];
	float mayor_salario, menor_salario;

	for (int i = 0; i < 10; ++i)
		scanf("%f", &listado[i].sueldo);

	medirSalarios(listado, &mayor_salario, &menor_salario);

	printf("\nmayor salario: %.2f;\nmenor salario: %.2f;\n", mayor_salario, menor_salario);

	return 0;
}