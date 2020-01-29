#include <stdio.h>

#define LIMIT 100

int main()
{
	int endp, endh;
	int pile[LIMIT], hist[LIMIT][2], buff[1][2];

		//wipe
	endp = 0;
	endh = 0;

	for (int i = 0; i < LIMIT; ++i)
	{
		pile[i] = 0;

		for (int j = 0; j < 2; ++j)
		{
			hist[i][j] = 0;
		}
	}

	for (int i = 0; i < 2; ++i)
	{
		buff[0][i] = 0;
	}
		//wipe

	//fill pile with user input
	for (int i = 0; i < LIMIT; ++i)
	{
		scanf("\n%d", &pile[i]);

		if (pile[i] == 0)
			i = LIMIT;

		endp++;
	}

	/*
	take input value
	compare with every input
	each equal number adds to tally
	and marks to ignore
	add result to histogram
	repeat for next unignored input
	*/
	for (int i = 0; i < endp; ++i)
	{
		if (pile[i] != 0)
		{
			buff[0][0] = pile[i]; //take input value
			buff[0][1] = 0;

			for (int j = 0; j < endp; ++j)
			{
				if (buff[0][0] == pile[j]) //compare with every input
				{
					buff[0][1]++; //tally
					pile[j] = 0; //mark off
				} 
				else if (pile[j] == 0)
					;
			}

			//add to histogram
			hist[endh][0] = buff[0][0];
			hist[endh][1] = buff[0][1];
			endh++;
		}
		else
			;
	}

	//print histogram data
	for (int i = 0; i < endh; ++i)
	{
		printf("%8d: ", hist[i][0]);
		
		//star bar
		for (int j = 0; j < hist[i][1]; ++j)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}