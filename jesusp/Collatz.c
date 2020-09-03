#include <stdio.h>

main(){

  int numero;

  printf("Ingresa un numero: ");
  scanf("%d", &numero);

  while(numero != 1){
    if(numero % 2 == 0){
      printf("%d,", numero);
      numero = numero / 2;
    }//fin if
    else{
      printf("%d,", numero);
      numero = (numero * 3) + 1;
    }//fin else
    if(numero == 1){
      printf("1\n");
    }//fin if
  }//fin while
return 0;
}