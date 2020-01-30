#include<stdio.h>
#include<math.h>
main()
{	int a;
	int b;
	int c;
	float resultado1;
	float resultado2;

	a=0;
	b=0;
	c=0;
	resultado1=0;
	resultado2=0;

	printf("Solucion a la equacion ax2+bx+c=\n");
	printf("a\n");
	scanf("%d",&a);
	printf("b\n");
	scanf("%d",&b);
	printf("c\n");
	scanf("%d",&c);

	if((b*b-4*a*c)>0)
	{resultado1=(a+sqrt(b*b-4*a*c))/2;
	resultado2=(a-sqrt(b*b-4*a*c))/2;
	printf("Resultado1:%f\n",resultado1);
	printf("Resultado2:%f\n",resultado2);	
	}

	else
		if((b*b-4*a*c)<0)
		{printf("error raiz cuadrada negativa");
		}
}