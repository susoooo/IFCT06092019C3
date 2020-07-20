/* Gestión de memoria
Cómo le pedimos al sistema que reserve memoria
la función que nos permite reservar memoria es malloc().
Lo que hace es reservar direcciones de memoria.
Esto es peligroso? 

*/
int contador;
char pentchar;
int pent;
double otroContador;
char * array[30];

struct a
{
	int campoA;
	double campoB;
};
// Para reservar 10 y 30 direcciones de memoria.
malloc(10);
malloc(30);
/* Para reservar memoria de una forma más correcta,
lo haremos reservando para un tipo de dato concreto,
de la siguiente forma: ponemos el tipo de dato para el que queremos reservar
y multiplicamos por el número de direcciones que queremos reservar.
Ejemplos: */
pent= malloc(sizeof(int)*20);
pentchar= malloc(sizeof(char)*100);
malloc(sizeof(a)*80);
/*
malloc devuelve un puntero a esa zona de memoria para poder acceder a esa memoria que hemos guardado.
ejemplo: el siguiente puntero "void" (nulo) no apunta a ningún sitio mientras solo esté declarado.
*/
void * puntero;
int * pent;

/*
Arriba, con pent estamos reservando espacio para enteros "int".
*/
pent= malloc(sizeof(int)*20);
(char *) puntero= malloc(sizeof(char)*100);
/*
La función "free" es la que se utiliza para liberar memoria.
Un "malloc" se corresponde con un único "free"
*/
free(puntero);
/*
"realoc" es una función que sirve para modificar la zona de memoria
que se quiere reservar. Le tienes que pasar la zona de memoria
y el nuevo tamaño de la zona de memoria.
No es muy usual hacer un "realoc"
*/
(char *) puntero=realloc(puntero, sizeof(char)*76);


