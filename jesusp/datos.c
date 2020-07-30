#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE * miFich;
char prueba[]={'r','w','t','s'};

miFich = fopen("prueba.txt","w");
fwrite (prueba , sizeof(char), sizeof(prueba), miFich);
fclose(miFich);
return 0;
}
