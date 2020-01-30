# include <stdio.h>

int main ()
{
// Declaramos un puntero
char * pMemo;
// Declaramos una variable size_t
size_t leidos;
// Declaramos el manejador del archivo
FILE * miFich;
// Abrimos el archivo y lo guardamos en el manejador
miFich=fopen("datos.txt", "r");
// Como el archivo es de solo lectura no se crea, por lo que no va a existir y va a dar un error
if(miFich!=0)
{
	// Si el archivo existe:
	pMemo= malloc(sizeof(char));
	if(pMemo!=NULL)
	{
		do
		{
		leidos= fread(pMemo,sizeof(char),1,miFich);
		if(leidos!=1)
		{
			perror("No he podido leer");
		}
		else{
			printf("%c", *pMemo);
		}
		}
		while(!feof(miFich));
		free(pMemo);
	}
	else
	{
		perror("No he conseguido reservar memoria ");
	}
	fclose(miFich);
}
else
{
	printf(" Esteeeee... Algo ha ido mal");
	// Esta función funciona como printf pero saca un mensaje con el último error que se produjo.
	perror(" Esteeeee... Algo ha ido mal");
}
}