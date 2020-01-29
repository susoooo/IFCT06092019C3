#include<stdio.h>
int main()
{
    char *pMemoria;
    size_t leidos;
    FILE *archivo;
    FILE *archivo2;

    archivo = fopen("C:\\Users\\Usuario\\Documents\\Programacion\\prueba.txt","r");
     archivo2 = fopen("C:\\Users\\Usuario\\Documents\\Programacion\\copia_de_prueba.txt","w");

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
                           fwrite(pMemoria,sizeof(char),1,archivo2);
                     }
                 }
            }
            while(!feof(archivo));
        }
        else
        {
            perror("No he conseguido memoria");
        }

        fclose(archivo2);
        fclose(archivo);
    }

    else
    {
        printf("Esto fue mal");
    }
}
