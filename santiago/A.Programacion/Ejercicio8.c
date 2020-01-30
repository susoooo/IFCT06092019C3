#include<stdio.h>
#include<math.h>
main()
{	float R1;
	float R2;
	float Req;

	R1=0;
	R2=0;
	Req=0;

	printf("Calculo de resistencia equivalente\n");
	printf("R1\n");
	scanf("%f",&R1);
	printf("R2\n");
	scanf("%f",&R2);

	Req=(R1*R2)/(R1+R2);
	printf("%f",Req);
}