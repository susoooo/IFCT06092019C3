#include<stdio.h>
main()
{	int dia;
	int sexo;

	dia=0;
	sexo=0;

	printf("Buenos modales\n");
	printf("Que monento del dia estamos?\n");
	printf("Responde con\n");
	printf("1 para manana\n");
	printf("2 para tarde\n");
	printf("3 para noche\n");
	scanf("%d",&dia);

	printf("Cual es tu sexo?\n");
	printf("Responde con\n");
	printf("1 para masculino\n");
	printf("2 para femenino\n");
	scanf("%d",&sexo);

	if((dia==1) && (sexo==1))
	 {
		printf("Buenos dias señor\n");
	 }
	else
	  {if((dia==1) && (sexo==2))
		{
		 printf("Buenos dias señora\n");
		}

	if((dia==2) && (sexo==1))
	 {
		printf("Buenos tardes señor\n");
	 }
	else
	  {if((dia==2) && (sexo==2))
		{
		 printf("Buenos tardes señora\n");
		}

	if((dia==3) && (sexo==1))
	 {
		printf("Buenos noches señor\n");
	 }
	else
	  {if((dia==3) && (sexo==2))
		{
		 printf("Buenos noches señora\n");
		}
	   }
	 }
	}
}

	