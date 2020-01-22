/*Un archivo kml es un documento de texto que contiene en formato xml información sobre coordenadas. Crea un programa que lea un archivo kml y que mueste la información que contiene dicho archivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>
#include <windows.h>

#define DEBUG 0

void configCodIO(void)
{
    //setlocale(LC_ALL, "spanish");
    SetConsoleCP(1252);
    //SetConsoleOutputCP(1252);	
}

void getStatus(char str[32],int *state, int *subState)
{
	if(!strcmp(str,"Document"))
		*state=1;
	else
	{
		if(!strcmp(str,"Folder"))
			*state=2;
		else
		{
			if(!strcmp(str,"Placemark"))
				*state=3;
			else
			{
				if(!strcmp(str,"name"))
					*subState=1;
				else
				{
					if(!strcmp(str,"description"))
						*subState=2;
					else
					{
						if(!strcmp(str,"coordinates"))
							*subState=3;
						else
							*subState=0;
					}
				}
			}
		}
	}
}

void printfcoord(char coords[64])
{
	int contador;
	int index;
	index=0;
	for(contador=0;contador<3;contador++)
	{
		printf("\t\t\t%c: ",'X'+contador);
		while(coords[index]!=',' && index<strlen(coords))
		{
			if(coords[index]>='0' && coords[index]<='9' || coords[index]=='-' || coords[index]=='.')
				printf("%c",coords[index]);
			index++;
		}
		index++;
		printf("\n");
	}
}

int main(void)
{
	char kmlfilePath[256];
	FILE * kmlFile;
	char * memo;
	size_t reader;
	char auxText[64];
	int index;
	int inTag;
	int inText;
	int state;	// 0 nothing, 1 document, 2 folder, 3 placemenent
	int subState;	// 0 nothing, 1 name, 2 description, 3 coordinates

	state=0;
	subState=0;
	index=0;
	inTag=0;
	inText=0;
		
	configCodIO();
	
	printf("Path to kml file: ");
	scanf("%s",kmlfilePath);
	
	kmlFile = fopen(kmlfilePath,"r");
	if(kmlFile!=0)
	{
		memo=malloc(sizeof(char));
		if(memo!=NULL)
		{
			do
			{
				reader = fread(memo,sizeof(char),1,kmlFile);
				if(reader==1)
				{
					if(*memo=='<')
					{
						if(inText)
						{
							auxText[index]='\0';
							//printf("%d-%d - %s\n",state,subState,auxText);
							switch(subState)
							{
								case 1:
									switch(state)
									{
										case 1:
											printf("Document: %s\n",auxText);
											break;
										case 2:
											printf("\tFolder: %s\n",auxText);
											break;
										case 3:
											printf("\t\tPlacemark: %s\n",auxText);
											break;
									}
									break;
								case 2:
									switch(state)
									{
										case 1:
											printf("Description: %s\n",auxText);
											break;
										case 2:
											printf("\tDescription: %s\n",auxText);
											break;
										case 3:
											printf("\t\tDescription: %s\n",auxText);
											break;
									}
									break;
								case 3:
									printfcoord(auxText);
									break;
							}
									
						}
						inTag=1;
						inText=0;
						index=0;
					}
					else
					{
						if(*memo=='>')
						{
							auxText[index]='\0';
							inTag=0;
							if(auxText[0] == '/')
							{
								//state=0;
								subState=0;
							}
							else
							{
								if(auxText[strlen(auxText)-1] != '/')
								{
									getStatus(auxText,&state,&subState);
									inText=1;
								}
							}
							index=0;
						}
						else
						{
							if(inTag || inText)
							{
								auxText[index]=*memo;
								index++;
							}
						}
					}						
				}
				free(memo);
			}while(!feof(kmlFile));
		}	
		fclose(kmlFile);
	}
	else
	{
		perror("OnOpenFile");
	}
	
	return(0);
}