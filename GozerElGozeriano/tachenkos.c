/*Un club deportivo desea realizar una aplicación para llevar la gestión de la información de la que dispone de las personas que juegan en alguno de los equipos del club. La información que se guarda de cada persona que juega es su nombre, apellidos, edad y altura. Se pide realizar un programa que almacene la información de forma permanente y que como mínimo permita lo siguiente:

1-Añadir datos de una persona
2-Listar los datos de todas las personas de las que se guarda información
3-Buscar por el nombre a una persona y que se listen sus datos
4-Encontrar a la persona más veterana que juega en el club y listar sus datos
5-Encontrar a la persna más joven que juega en el club y listar sus datos
6-Encontrar a la persona más alta que juega en el club y listar sus datos
7-Encontrar a la persona más baja que juega en el club y listar sus datos
8-Ver, uno a uno, los datos de todas las personas, hasta que se pulse una tecla determinada
9-Calcular la media de las edades de las personas que juegan en el club
10-Calcular la media de las alturas de las personas que juegan en el club
11-Eliminar datos de una persona determinada
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <locale.h>
#include <windows.h>

#define SAVEFILE "PLAYERS.TXT"
#define MAXPLAYERS 100
#define MAXSTRING 30
#define DEBUG 0

struct player
{
	char name[MAXSTRING];
	char lastname[MAXSTRING];
	int age;
	float high;
	int active;
};

void configCodIO(void)
{
    //setlocale(LC_ALL, "spanish");
    SetConsoleCP(1252);
    //SetConsoleOutputCP(1252);	
}

void printMenu(void)
{
	printf("\t1) Añadir jugador\n");
	printf("\t2) Listar jugadores\n");
	printf("\t3) Buscar jugador\n");
	printf("\t4) Top veterano\n");
	printf("\t5) Top rocky\n");
	printf("\t6) Top altura\n");
	printf("\t7) Top enano\n");
	printf("\t8) Listar jugadores (pausa)\n");
	printf("\t9) Edad media\n");
	printf("\t10) Altura media\n");
	printf("\t11) Eliminar jugador\n");
	printf("\t0) Salir\n");
	printf("Opción: ");
}

void chopEOL(char strToChop[MAXSTRING])
{
	if(strToChop[strlen(strToChop)-1] == '\n' ) strToChop[strlen(strToChop)-1] = 0;
}

int loadPlayers(struct player players[MAXPLAYERS]) // returns count of players
{
	FILE * saveFile;
	char buff[MAXSTRING];
	int playersCount;
	struct player auxPlayer;
	
	playersCount = 0;
	saveFile = fopen(SAVEFILE,"r");
	if(saveFile!=0)
	{
		do
		{
			if(fgets(buff,MAXSTRING,saveFile)!=NULL) // get name
			{
				chopEOL(buff);
				strcpy(auxPlayer.name,buff);
				fgets(buff,MAXSTRING,saveFile); // get lastname
				chopEOL(buff);
				strcpy(auxPlayer.lastname,buff);
				fgets(buff,MAXSTRING,saveFile); // get age
				//chopEOL(buff);
				auxPlayer.age = (int)strtol(buff, (char **)NULL,10);
				fgets(buff,MAXSTRING,saveFile); // get high
				auxPlayer.high = (float)strtof(buff, (char **)NULL);
				fgets(buff,MAXSTRING,saveFile); // get active
				auxPlayer.active = (int)strtol(buff, (char **)NULL,10);
				players[playersCount] = auxPlayer;
				playersCount++;
			}
		}while(!feof(saveFile));
		fclose(saveFile);
	}
	return(playersCount);
}

/*void savePlayer(struct player newplayer)
{
	FILE * saveFile;
	
	saveFile = fopen(SAVEFILE,"a");
	if(saveFile!=0)
	{
		fwrite(newplayer.name,sizeof(char),strlen(newplayer.name), saveFile);
		fwrite("\n",sizeof(char),1,saveFile);
		fwrite(newplayer.lastname,sizeof(char),strlen(newplayer.lastname), saveFile);
		fwrite("\n",sizeof(char),1,saveFile);
		fprintf(saveFile,"%d\n", newplayer.age);
		fprintf(saveFile,"%f\n", newplayer.high);
		fprintf(saveFile,"%d\n", newplayer.active);
		fclose(saveFile);
		printf("Jugador guardado\n");
	}
	else
	{
		perror("F savePlayer KO");
	}
}*/

void save(struct player * players, int maxIndex)
{
	int contador;
	
	FILE * saveFile;
	
	saveFile = fopen(SAVEFILE,"w");
	if(saveFile!=0)
	{
		for(contador=0;contador<maxIndex;contador++)
		{
			fwrite(players[contador].name,sizeof(char),strlen(players[contador].name), saveFile);
			fwrite("\n",sizeof(char),1,saveFile);
			fwrite(players[contador].lastname,sizeof(char),strlen(players[contador].lastname), saveFile);
			fwrite("\n",sizeof(char),1,saveFile);
			fprintf(saveFile,"%d\n", players[contador].age);
			fprintf(saveFile,"%f\n", players[contador].high);
			fprintf(saveFile,"%d\n", players[contador].active);
		}
		fclose(saveFile);
		printf("Jugadores guardados\n");
	}
	else
	{
		perror("F savePlayers KO");
	}
}

void showPlayer(struct player selPlayer)
{
	printf("Nombre: %12s\n",selPlayer.name);
	printf("Apellido: %10s\n",selPlayer.lastname);
	printf("Edad: %14d\n",selPlayer.age);
	printf("Altura: %12.2f\n\n",selPlayer.high);
	if(DEBUG) printf("Activo: %12d\n\n",selPlayer.active);
}

void listPlayers(struct player * players, int maxIndex, int pause)
{
	int contador;
	char inputChar;
	
	inputChar = '0';

	for(contador=0;contador<maxIndex;contador++)
	{
		if(players[contador].active==1)
		{
			showPlayer(players[contador]);
			if(pause)
			{
				do
				{
					fflush(stdin);
					printf("(Pulse INTRO para continuar)\n");
					inputChar = getchar();
				}while(inputChar != '\n');
								
			}
		}
	}
}

int searchPlayer(char nameToSearch[MAXSTRING], struct player players[MAXPLAYERS], int maxIndex)
{
	int contador;
	int index;
	
	for(contador=0;contador<maxIndex;contador++)
	{
		if(players[contador].active==1)
			if(!strcmp(nameToSearch,players[contador].name))
			{
				index = contador;
				if(DEBUG) printf("Jugador encontrado en índice %d\n",index);
			}
	}
	return(index);
}

void deletePlayer(struct player * players, int index)
{
	players[index].active = 0;
}

int getOldest(struct player players[MAXPLAYERS], int maxIndex)
{
	int oldestIndex;
	int contador;
	oldestIndex = 0;
	
	for(contador=0;contador<maxIndex;contador++)
	{
		if(players[contador].age > players[oldestIndex].age)
			oldestIndex = contador;
	}
	return(oldestIndex);
}

int getRocky(struct player * players, int maxIndex)
{
	int oldestIndex;
	int contador;
	oldestIndex = players[0].age;
	
	for(contador=0;contador<maxIndex;contador++)
	{
		if(players[contador].age < players[oldestIndex].age)
			oldestIndex = contador;
	}
	return(oldestIndex);
}

int main(void)
{
	struct player players[MAXPLAYERS];
	struct player auxPlayer;
	int option;
	int index;
	char searchName[MAXSTRING];
	
	option=0;
	
	configCodIO();
	index = loadPlayers(players);
	
	do
	{
		printMenu();
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: 
				printf("Añadir jugador\n");
				printf("Nombre : ");
				scanf("%s",&auxPlayer.name);
				printf("Apellido : ");
				scanf("%s",&auxPlayer.lastname);
				printf("Edad : ");
				scanf("%d",&auxPlayer.age);
				printf("Altura : ");
				scanf("%f",&auxPlayer.high);
				auxPlayer.active = 1;
				players[index]=auxPlayer;
				index++;
				save(players, index);
				break;
			case 2:
				printf("Lista de jugadores\n");
				listPlayers(players, index,0);
				break;
			case 3:
				printf("Buscar jugador\nNombre: ");
				scanf("%s",searchName);
				showPlayer(players[searchPlayer(searchName, players, index)]);
				break;
			case 4:
				printf("Jugador más veterano\n");
				showPlayer(players[getOldest(players,index)]);
				break;
			case 5:
				printf("Jugador más joven\n");
				showPlayer(players[getRocky(players,index)]);
				break;
			case 8:
				printf("Listar jugadores (con pausa)\n");
				listPlayers(players, index,1);
				break;
			case 11:
				printf("Eliminar jugador\nNombre: ");
				scanf("%s",searchName);
				deletePlayer(players,searchPlayer(searchName, players, index));
				save(players, index);
				break;
		}
		
		
	}while(option!=0);
	return(0);
}
		