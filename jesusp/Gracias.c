#include <stdio.h>

main()
{
	
	int tecla;
	
	tecla=0;
	
	
	printf("Pulse una tecla: ");
	scanf("%d", &tecla);
	
	
	while(tecla != 1)
	{
		printf("Tecla incorrecta\n");
		printf("Pulse una tecla: ");
		scanf("%d", &tecla);		
	}
	printf("gracias");
	
}