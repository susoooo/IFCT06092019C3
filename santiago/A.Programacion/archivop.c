#include<stdio.h>
int main()
{
	char *pMemo;
	size_t leidos;
	FILE *miFich;
	
	miFich = fopen("datos.txt","r");
	
	if(miFich!=0)
	{
		pMemo=malloc(sizeof(char));
		
		if(pMemo!=NULL)
		{
			do
			{
				leidos=fread(pMemo,sizeof(char),1,miFich);
				
				if(leidos!=1)
				{
					perror("No he podido leer");
				}
				
				else
				{
					printf("%c",*pMemo);
				}
			}
			while(!feof(miFich));
		}
	
		else
		{
			perror("No he conseguido memoria);
		}
		
		fclose(miFich);
		
	}
	
	else
	{
		printf("Esteeee.... Algo ha ido mal");
	}
	
}