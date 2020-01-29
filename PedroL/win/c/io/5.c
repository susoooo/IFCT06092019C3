#include <stdio.h>

int main(int argc, char const *argv[])
{
	int dia, hor, min, seg;
	int const SEGUNDOS_EN_MINUTOS = 60;
	int const SEGUNDOS_EN_HORAS = 60 * 60;
	int const SEGUNDOS_EN_DIAS = SEGUNDOS_EN_HORAS * 24;

	dia = 0;
	hor = 0;
	min = 0;
	seg = 0;

	printf("dias: ");
	scanf("%d", &dia);
	printf("\nhoras: ");
	scanf("%d", &hor);
	printf("\nminutos: ");
	scanf("%d", &min);

	seg = (min * SEGUNDOS_EN_MINUTOS) 
			+ (hor * SEGUNDOS_EN_HORAS) 
			+ (dia * SEGUNDOS_EN_DIAS);
	printf("\n%d\n", seg);
}