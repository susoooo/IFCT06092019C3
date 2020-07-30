#include <stdio.h>
#include <math.h>

int cosas(int c,int r, int n)
{
int conta;
conta =0;
for(conta=1;conta<r;conta++)
{
	c=n*(r*(n-r));
}
printf("%d", c);
}

int main()
{
	int c;
	int r;
	int n;
	c=0;
	r=0;
	n=0;
	printf("Introduce primer numero:");
	scanf("%d",&r);	
	printf("Introduce segundo numero:");
	scanf("%d",&n);
	if(r!=0 && n!=0)
	{
		cosas(c,r,n);
	}
}