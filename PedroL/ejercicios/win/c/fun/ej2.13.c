#include <stdio.h>

#define ARR_ROWS 10

void descResta(int * buff_start, int * index, int hop)
{
	if (*(buff_start + *(index)) <= hop)
		;
	else
	{
		*(buff_start + *(index) + 1) = *(buff_start + *(index)) - hop;
		*(buff_start + *(index)) = hop;

		for (int i = 0; i < ARR_ROWS; ++i)
			printf("%d", *(buff_start + i));
		printf("\n");

		*(index) = *(index) + 1;

		descResta(buff_start, index, hop);
	}
}

int main(int argc, char const *argv[])
{
	int buffer[ARR_ROWS];
	int index, num;

	scanf("%d", &num);
	printf("--------\n");

	for (int i = 1; i <= (num / 2 + 1); i++)
	{	
		printf("%d\n----\n", i);

		for (int i = 0; i < ARR_ROWS; ++i)
			buffer[i] = 0;

		buffer[0] = num;
		index = 0;

		descResta(buffer, &index, i);

		printf("\n");
	}

	return 0;
}