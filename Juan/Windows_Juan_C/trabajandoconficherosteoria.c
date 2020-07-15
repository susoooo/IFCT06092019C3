/* Libro Academia 99: LIBRO PROGRAMACIÓN EN LENGUAJE C
Trabajar con ficheros:
ABRIR ARCHIVO, podemos:
-ESCRIBIR (reservar memoria)
-LEER (reservar memoria)
CERRAR ARCHIVO.(liberar memoria)
La función para abrir un archivo es fopen
la función para cerrar es fclose
para leer fread y para escribir fwrite
*/

# include <stdio.h>
// Ejemplos:
fopen(char*nombre, char*modo);
// Abrir en modo lectura, el archivo tiene que existir si no fopen dará un error.
// r -> lectura. Debe existir.
// w -> escritura. Si no existe el archivo lo crea y si existe lo limpia o sobreescribe.
// wr -> Crea o sobreescribe y lo puedes leer.
// a -> Añade. Abre el archivo y se coloca al final  y si el archivo no existe lo crea.
// hay S.O. en que puedes leer si solo lo abres en modo añadir (a), si no hay que abrirlo también
// en modo lectura (r).
/*
r+
w+
a+
t
b
*/

fopen("miarchivo.txt", "r"); 
fclose(manejador);
/* Leer */
size_t fread(void*puntero,size_t tamaño,size_t nregistros, FILE *fichero);
size_t leidos;
void * pDatos;
pDatos=malloc(sizeof(struct xogador) *1000000);
leidos= fread(pDatos,sideof(char),1000000, manejador);
feof(manejador);//(End Of File)
fwrite();