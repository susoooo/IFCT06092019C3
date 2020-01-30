#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	char matriz[100][100];
	
	int varX;
	int varY;
	
	int varA;
	int varB;
	int varC;
	
	varX = 0;
	varY = 0;
	varA = 0;
	varB = 0;
	varC = 0;
	
	printf("\nCalculo de matriz: ");
	printf("\nIntroduzca los valores de a, b y c.");
	
	printf("\nIntroduzca el valor de A: ");
	scanf("%d", &varA);
	
	printf("\nIntroduzca el valor de B: ");
	scanf("%d", &varB);
	
	printf("\nIntroduzca el valor de C: ");
	scanf("%d", &varC);
	
	for (varX = 0; varX < 100; varX++)
	{
		for (varY = 0; varY < 100; varY++)
		{
			matriz[varX][varY] = '.';
		}
	}
	
	for (varX = 0; varX < 100; varX++)
	{
		varY = ((varA / varB) * varX) + (varC / varB);
		
		matriz[varX][varY] = '*';
	}
	
	for (varX = 0; varX < 100; varX++)
	{
		for (varY = 0; varY < 100; varY++)
		{
			printf("%c", matriz[varX][varY]);
		}		
		printf("\n");
	}
	
}