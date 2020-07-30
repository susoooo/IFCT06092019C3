#include <stdio.h>

int main ()
{
 char * pMemo;
 size_t leidos;
 FILE * miFich;


  miFich = fopen("datos.txt","r");
      pMemo=malloc(sizeof(char));
        do
        { 
           leidos = fread(pMemo,sizeof(char),1,miFich);
              printf("%c",*pMemo);     
          }
          while(!feof(miFich));
        free(pMemo);
     fclose(miFich);

}