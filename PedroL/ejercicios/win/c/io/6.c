#include <stdio.h>

int main(int argc, char const *argv[])
{
	int time[3], seg, res;
	int const SEGUNDOS_EN_MINUTOS = 60;
	int const SEGUNDOS_EN_HORAS = 60 * 60;
	int const SEGUNDOS_EN_DIAS = SEGUNDOS_EN_HORAS * 24;

	seg = 0;
	res = 0;

	printf("segundos: ");
	scanf("%d", &seg);
		
	time[0] = seg / SEGUNDOS_EN_DIAS;
	res = seg % SEGUNDOS_EN_DIAS;
	time[1] = res / SEGUNDOS_EN_HORAS;
	res = seg % SEGUNDOS_EN_HORAS;
	time[2] = res / SEGUNDOS_EN_MINUTOS;

	printf("\n%d : %d : %d",
		time[0], time[1], time[2]);
	printf("\ndia  hor  min");

	return 0;
}