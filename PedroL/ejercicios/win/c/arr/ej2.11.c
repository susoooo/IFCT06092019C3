#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int total;
	int results[6];

		//wipe
		total = 0;

	for (int i = 0 ; i < (sizeof(results) / sizeof(int)) ; i++)
		results[i] = 0;
		//wipe

	for (int i = 0 ; i < 6000 ; i++)
		++results[rand() % 6];

	for (int i = 0 ; i < (sizeof(results) / sizeof(int)) ; i++)
		printf("%d\n", results[i]);
	
	for (int i = 0 ; i < (sizeof(results) / sizeof(int)) ; i++)
		total = total + results[i];

	printf("\ntotal: %d", total);

	return 0;
}