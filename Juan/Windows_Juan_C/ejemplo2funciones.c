/*
Directivas precompilación:
Son todas las órdenes con #
*/
#include <stdio.h>
/*
Un define es un alias de cualquier cosa (una constante, un string, un trozo de código, etc) para el compilador.
El compilador busca en el código lo que hay en el define y lo sustituye por su valor.
Los define se escriben literalmente en el código cuando lo queramos utilizar (sin punto y coma).
Los define van siempre en mayúsculas (ESTA NORMA NO ES OBLIGATORIO PERO ES UNA PRÁCTICA HABITUAL PARA DISTINGUIRLOS DEL RESTO DEL CÓDIGO).
Esto puede formar parte de la refactorización.
*/
#define CHAPUZAS_DIVISION_ENTRE_0 2
// Un define para el código de declaración y inicialización de la variable resultado.
#define INICIO_VAR_RESULTADO int resultado; resultado=0;
#define MSGBIENVENIDA "Bienvenido a calcu+"

int travieso;
int cod_error;

// Función SUMA
int suma(int n1, int n2)
{
INICIO_VAR_RESULTADO
resultado= n1+n2;
return(resultado);
}
// Función SUSTRACCIÓN
int sustraccion(int num1, int num2, int num3, int num4)
{
INICIO_VAR_RESULTADO
printf(MSGBIENVENIDA);
resultado=num1-num2-num3-num4;
return(resultado);
}
// Función DIVISIÓN
float division(float nu1, float nu2)
{
float resultado_dv;

if(nu2!=0)
{
resultado_dv= nu1/nu2;
}
else
{
cod_error= CHAPUZAS_DIVISION_ENTRE_0
resultado_dv=  0.0;
/* Muy importante: Así es como funciona siempre la gestión de errores:
SE UTILIZA UNA VARIABLE GLOBAL en la que se cargan los errores que se puedan producir.
*/
}
return(resultado_dv);
}

int main()
{
int num1;
int num2;
INICIO_VAR_RESULTADO

scanf("%d", &num1);
scanf("%d", &num2);
cod_error=0;
suma(num1, num2);
resultado= suma(num1,num2);
if(cod_error!=0)
{
	printf("ERROR:%d", cod_error);
}
printf("Resultado:%d", resultado);
resultado= sustraccion(num1,num2,0,0);
printf("Resultado:%d", resultado);
}