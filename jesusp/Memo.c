#include <stdio.h>
#include <stdlib.h>
int main()
{

char * pMemo;
size_t leidos;
FILE * miFich;

miFich = fopen("datos.txt","r");
if(miFich!=0)
    {

        pMemo=malloc(sizeof(char));
        if(pMemo!=NULL)
                {
                    do
                    {
                        leidos = fread(pMemo,sizeof(char),1,miFich);
                        if(leidos!=1)
                        {
                            perror("\nNo he podido leer");
                        }
                        else
                        {
                            printf("%c",*pMemo);

                        }

                    }
            while(!feof(miFich));
            free(pMemo);
        }
        else
        {
            perror("No he consequido reservar memoria");
        }
        fclose(miFich);

    }
    else
    {
        perror("Esteeeeeee... Algo ha ido mal");
    }
}
