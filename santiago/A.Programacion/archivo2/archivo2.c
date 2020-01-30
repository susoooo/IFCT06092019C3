#include<stdio.h>
int main()
{
    char *pMemoria;
    size_t leidos;
    FILE *archivo;

    archivo = fopen("C:\\Users\\Usuario\\Documents\\Programacion\\prueba.txt","r");

    if(archivo!=0)
    {
        pMemoria=malloc(sizeof(char));
        if(pMemoria!=NULL)
        {
            do
            {
                leidos=fread(pMemoria,sizeof(char),1,archivo);
                if(leidos!=1 && !feof(archivo))
                {
                    perror("No he podido leer");
                }
                 else
                 {
                     if(!feof(archivo))
                     {
                            *pMemoria=toupper(*pMemoria);
                           printf("%c",*pMemoria);
                     }
                 }
            }
            while(!feof(archivo));
        }
        else
        {
            perror("No he conseguido memoria");
        }

        fclose(archivo);
    }

    else
    {
        printf("Esto fue mal");
    }

}
