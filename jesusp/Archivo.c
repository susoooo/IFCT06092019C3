#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
FILE * miFich;
FILE * file;
char data1;
char data2;
miFich=fopen("C:\\Users\\Usuario\\Documents\\datos.txt","r");
file=fopen("C:\\Users\\Usuario\\Documents\\copia_de.txt","w");
while(!feof(miFich))
    {
        data1=fgetc(miFich);
        data2=data1;
        fputc(data2,file);
        printf("%c",data2);
    }
fclose (miFich);
fclose (file);
return 0;
}
