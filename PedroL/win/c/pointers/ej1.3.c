#include <stdio.h>

#define ARR_SIZE 15

void input(int * arr)
{
	printf(":\n");

	for (int i = 0; i < ARR_SIZE; ++i)
		scanf("\n%d", &arr[i]);
}

void show(int * arr)
{
	for (int i = 0; i < ARR_SIZE; ++i)
		printf("%d\n", arr[i]);
}

int main(int argc, char const *argv[])
{
	int arr[ARR_SIZE];

	input(arr);
	printf("\n");
	show(arr);

	return 0;
}