#include <stdio.h>

main()
{
	
	int tecla;	
	
	tecla=0;
	
		printf("Dame una tecla: ");
		scanf("%d", &tecla);
	while(tecla!=1)
	{
		printf("Tecla incorrecta");
		printf("\n Dame una tecla: ");
		scanf("%d", &tecla);
	}
	
	printf("Gracias.");
	

}