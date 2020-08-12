#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main(void)
{
	int a, b;
	char scr[128], str[3];
	
	sprintf(scr, "%3dtest message\n", a = 1);
	printf("%s", scr);
	strncpy(str, scr, 3);
	b = atoi(str);
	printf("%d\n", b);
}
