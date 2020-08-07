#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//pretty
void FunLoader(int cycles)
{
	int count, j;
	char load[4]="-\|/";
	
	count = cycles * 4;

	for (int i = 0; i < count; ++i)
	{
		j=i%sizeof(load);
		printf("\b%c",load[j]);
		usleep(66666);
	}
}

//sorting logic
int Compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

//case 1 or 4
int MayorMenor()
{
	int sel;
	int nums[3] = {0,0,0};

	printf("¿[2] o [3] numeros?: ");
	scanf("%d",&sel);
	printf("\n ingresa %d numeros:\n", sel);

	//fill array
	for(int i = 0; i < sel; i++)
	{
		scanf("\n%d", &nums[i]);
	}

	qsort(nums, 3, sizeof(int), Compare);

	FunLoader(4);

	switch(sel)
	{
	case 2:
		printf("\n %d es mayor que %d", nums[2], nums[1]);
		break;
	
	case 3:
		printf("\n %d es mayor que %d,\n el cual es mayor que %d", 
			nums[2], nums[1], nums[0]);
		break;

	default:
		printf("\n opcion incorrecta!");
	}

	return 0;
}

//case 2
int ParInpar()
{
	int nums[3] = {0,0,0};

	printf("ingresa 3 numeros: \n");

	for(int i = 0; i < 3; i++)
		scanf("\n%d", &nums[i]);

	FunLoader(4);

	for(int i = 0; i < 3; i++)
	{
		if(nums[i] % 2 == 0) 
			printf("\n %d es par", nums[i]);
		else
			printf("\n %d es inpar", nums[i]);
	}

	return 0;	
}

//case 3
int Saludo()
{
	int cuando, sexo;
	char gen[] = {'o','a','a'};
	char day[3][7] = {"dias","tardes","noches"};
	char user[2][7] = {"senor","senora"};

	printf("[1] manana \n[2] tarde \n[3] noche \nseleccion: ");
	scanf("%d",&cuando);

	printf("\n\n");

	printf("[1] masculino\n[2] femenino \nseleccion: ");
	scanf("%d",&sexo);

	printf("\n\n");

	//error checking
	if(cuando > 3 || sexo > 2)
		printf("seleccion incorrecta!");

	//fingers crossed...
	printf("Buen%cs %s, %s.", 
		gen[cuando - 1], day[cuando - 1], user[sexo - 1]);

	return 0;
}

int main()
{
	int route;

	printf("[1] mayor o menor \n[2] par o inpar (3 digitos) ");
	printf("\n[3] saludo \nseleccion: ");
	scanf("%d", &route);
	printf("\n");

	switch(route)
	{
		case 1:
			MayorMenor();
			break;

		case 2:
			ParInpar();
			break;

		case 3:
			Saludo();
			break;

		default:
			printf("seleccion incorrecta!");
	}

	return 0;
}