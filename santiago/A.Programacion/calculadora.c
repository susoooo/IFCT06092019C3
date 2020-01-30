#include<stdio.h>
main()
{	float numero1;
	float numero2;
	int opcion;
	float suma;
	float resta;
	float multiplicacion;
	float division;

	numero1=0;
	numero2=0;
	suma=0;
	resta=0;
	multiplicacion=0;
	division=0;
	opcion=0;

	printf("Hola soy CALCU+\n");
	printf("Opcion 1 suma\n");
	printf("Opcion 2 resta\n");
	printf("Opcion 3 multiplicacion\n");
	printf("Opcion 4 division\n");
	scanf("%d",&opcion);

	if(opcion==1)
		{ scanf("%f",&numero1);
		  scanf("%f",&numero2);
		suma = numero1+numero2;
		printf("Resultado suma: %f\n",suma);
		}
	else
		{ if(opcion==2)
			{scanf("%f",&numero1);
			 scanf("%f",&numero2);
			resta = numero1-numero2;
			printf("Resultado resta:%f\n",resta);
			}
		else
		{ if(opcion==3)
			{scanf("%f",&numero1);
			scanf("%f",&numero2);
			multiplicacion = numero1*numero2;
			printf("Resultado multiplicacion:%f\n",multiplicacion);
			}
		
			else
			{ if(opcion==4)
				{scanf("%f",&numero1);
				scanf("%f",&numero2);
				division = numero1/numero2;
				printf("Resultado division:%f\n",division);}
		
			else
			{ if(opcion<1 || opcion>4)
				{printf("error\n");}
			}
		}
	}
	}

printf("Adios");
}