/*1.- Realizar un programa que tras dormir 10 segundo envíe la señal SIGTERM a si mismo.*/
#include <signal.h>
#include <unistd.h>
#include <stdio.h>


int main()
{
  puts( " Programa iniciado...");
  sleep(10);
  raise(SIGTERM); 
  puts ( " Este mensaje no puedo mostrar ");
}

