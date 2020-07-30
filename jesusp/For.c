#include <stdio.h>

main(){
	int numero1;
	int numero2;
	int contador;
	contador=0;
	numero1=0;
	numero2=0;
	
	printf("Dame un numero:");
	scanf("%d", &numero1);
	printf("Dame un numero:");
	scanf("%d", &numero2);
	for(contador = numero1; contador < numero2; contador++)
	{
		printf("%d\n", contador);
	}
	 
	contador=numero1;
	while(contador < numero2)
	{
		printf("%d\n");
		contador++;
	}
	
	contador=numero1;
	do
	{
		printf("%d\n");
		contador++;
	}
	while(contador < numero2);
}