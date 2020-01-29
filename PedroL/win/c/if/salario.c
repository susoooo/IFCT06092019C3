#include <stdio.h>
#include <math.h>

#define THRESHOLD1 40
#define THRESHOLD2 50

int main()
{
	float horasTrabajadas, precioCobrado, total;

	total = 0.0;

	printf("horas trabajadas: ");
	scanf("%f", &horasTrabajadas);

	printf("\nprecio cobrado: ");
	scanf("%f", &precioCobrado);
	
	if(horasTrabajadas < THRESHOLD1)
		//no bonus
		total = horasTrabajadas * precioCobrado;
	else
	{
		total = THRESHOLD1 * precioCobrado;

		//first bonus
		if(horasTrabajadas < THRESHOLD2)
			total = ((horasTrabajadas - THRESHOLD1) * precioCobrado * 1.5) + total;
		else
		{
			total = (10 * precioCobrado * 1.5) + total;
			total = ((horasTrabajadas - 50) * precioCobrado * 2) + total;
		}
	}

	printf("\n\nsalario total: %.2f", total);

	return 0;
}