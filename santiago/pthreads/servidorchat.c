#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define PORTNUMBER 12543

int indice_threads;
char buf[30];
char listacomandos[4][16];    
char *pMemoria;

void * funcion (void * parametro)
{

    int buf2;
    int len;
	int contador;
	int contador2;
	int x;
	int m;
	int id;
	FILE *archivo;
	
	x = * (int*) parametro;
	
	fflush(stdout);
	for(contador=0; contador<30; contador++)
		{buf[contador]=0;}
	contador2=0;
	buf2=0;

	recv(x, &buf, sizeof(buf),0);
	printf("buf: %s\n",buf);
	write(0,buf,sizeof(buf));
	fflush(stdout);

	do
	{
		buf2=contador2;					
		m=strncmp(buf, listacomandos[contador2], strlen(listacomandos[contador2]));
		contador2++;
	}while((m!=0) && contador2<5);
	
	printf("Contador: %d Buffer2: %d\n",contador2, buf2);
	fflush(stdout);
	
	switch(buf2)
	{
		case 0://*NAME
			strcpy(pMemoria,(buf+5));
//			fwrite(pMemoria,sizeof(pMemoria),strlen(pMemoria),archivo);
			printf("Usuario %s\n",pMemoria);
			fflush(stdout);
			send(x, "OK", 2*sizeof(char), 0);
		break;
		
		case 1://*MESSAGES
			strcpy(pMemoria,(buf+9));
//			fwrite(pMemoria,sizeof(pMemoria),strlen(pMemoria),archivo);
			printf("Mensage %s\n",pMemoria);
			fflush(stdout);
			send(x, "OK", 2*sizeof(char), 0);
		break;
		
		case 2://*UPDATE MESSAGES
			strcpy(pMemoria,(buf+16));
//			fwrite(pMemoria,sizeof(pMemoria),strlen(pMemoria),archivo);
			printf("Update mensage %s\n",pMemoria);
			fflush(stdout);
			send(x, "OK", 2*sizeof(char), 0);
		break;
		
		case 3://*GOODBYE
				indice_threads--;		
		break;
		
		default:

			for(contador=0; contador<30; contador++)
			{buf[contador]=0;}
			strcpy(buf, "error");
			send(x, &buf, strlen(buf), 0);
		break;
	}
}
int main(void)
{
    
    int s, len;
    int x;
    char *n;
    char comando[16];
    size_t leidos;
    FILE *archivo;
    pthread_t th[12];
    struct sockaddr_in name;
    struct sockaddr_in peer;
    
    memset(listacomandos,0,64);
    strcpy(listacomandos[0], "NAME");
	strcpy(listacomandos[1], "MESSAGES");
	strcpy(listacomandos[2], "UPDATE MESSAGES");
	strcpy(listacomandos[3], "GOODBYE");

	indice_threads = 0;
	
    s = socket(PF_INET, SOCK_STREAM, 0);
    perror("socket");
    name.sin_family = AF_INET;
    name.sin_port = htons(PORTNUMBER);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    len = sizeof(struct sockaddr_in);

    bind(s, (struct sockaddr *) &name, len);
    perror("bind");
    
    archivo = fopen("\\home\\chat.txt","a+");
    if(archivo!=0)
    {
        pMemoria=malloc(sizeof(char));
        if(pMemoria!=NULL)
        {
    
    		listen(s,12);
    		perror("listen");
    		
    		while(1==1)
    		{
    			x= accept(s, (struct sockaddr *)&peer, &len);
    			perror("accept");
    			if (x!=0)
    			{
    				pthread_create(&(th[indice_threads]),NULL,funcion,(void*)&x);
					indice_threads++;
				}
			}
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

