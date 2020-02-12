#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void  factorial(int lec)
{
    int contador;
    int facto;
    int numero;
    contador=0;
    facto=1;
    read(lec,&numero,sizeof(int));
    for(contador=1;contador<=numero;contador++)
    {
        facto=facto*contador;
    }
    printf("El factorial es:%d \n",facto);
}

void  numer(int esc)
{
int numero;
printf("Dame un número:\n");
scanf("%d",&numero);
if(numero==0)
    {
        perror("Número equivocado");
    }
    else
    {
        write(esc,&numero,sizeof(int));
    }
sleep(1);

}

int main()
{

int pid, tubo[2];
pipe(tubo);
    if((pid=fork())==0)
        {
            close(tubo[1]);
            factorial(tubo[0]);
        }
        else
        {
            close(tubo[0]);
            numer(tubo[1]);
        }

}
