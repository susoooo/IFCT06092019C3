#include <stdio.h>
#include <stdlib.h>

struct fechNa
{
int dia;
int mes;
int anho;
};

struct jugador
{
char nombre[30];
char apellidos[60];
struct fechNa nacimiento;
float altura;
};

struct jugador * nombre()
{
 FILE * Jugador;
 struct jugador datos;
    Jugador = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","a");
    printf("Introduce el nombre: \n");
    fgets(&datos.nombre,30,stdin);
    printf("Introduce los apellidos: \n");
    fgets(&datos.apellidos,60,stdin);
    printf("Introduce la fecha de nacimiento: \n");
    scanf("%d",&datos.nacimiento.dia);
    scanf("%d",&datos.nacimiento.mes);
    scanf("%d",&datos.nacimiento.anho);
    printf("Introduce la altura: \n");
    scanf("%f",&datos.altura);
    fwrite(&datos,sizeof(struct jugador),1,Jugador);
    fclose(Jugador);
};

struct jugador * masvet()
{
FILE * veterano;
struct jugador vete;
struct jugador leido;
vete.nacimiento.anho=2023;
vete.nacimiento.dia=31;
vete.nacimiento.mes=12;

veterano = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
while(!feof (veterano))
    {
        fread(&vete,sizeof(struct jugador),1,veterano);
        if((vete.nacimiento.anho <= leido.nacimiento.anho)&&(vete.nacimiento.dia <= leido.nacimiento.dia)&&(vete.nacimiento.mes <= leido.nacimiento.mes))
            {
                vete=leido;
            }
    }
    printf("El mas veterano es:%s, %s , %d, %2.f",vete.nombre,vete.apellidos,vete.nacimiento.anho,vete.altura);
    fclose(veterano);
};

struct jugador * masjoven()
{
FILE * Joven;
struct jugador menor;
struct jugador leido;
menor.nacimiento.anho=1980;
menor.nacimiento.dia=31;
menor.nacimiento.mes=12;

Joven = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
while(!feof (Joven))
    {
        fread(&menor,sizeof(struct jugador),1,Joven);
        if((menor.nacimiento.anho >= leido.nacimiento.anho)&&(menor.nacimiento.dia >= leido.nacimiento.dia)&&(menor.nacimiento.mes >= leido.nacimiento.mes))
            {
                menor=leido;
            }
    }
    printf("El mas joven es:%s, %s , %d, %2.f",menor.nombre,menor.apellidos,menor.nacimiento.anho,menor.altura);
    fclose(Joven);
};

struct jugador * masalto()
{
FILE * alto;
struct jugador torre;
struct jugador leido;
torre.altura=1,60;


alto = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
while(!feof (alto))
    {
        fread(&torre,sizeof(struct jugador),1,alto);
        if(torre.altura > leido.altura)
            {
                torre=leido;
            }
    }
    printf("El mas alto es:%s, %s , %d, %2.f",torre.nombre,torre.apellidos,torre.nacimiento.anho,torre.altura);
    fclose(alto);
};

struct jugador * masbajo()
{
FILE * bajo;
struct jugador nano;
struct jugador leido;
nano.altura=2,50;

bajo = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
while(!feof (bajo))
    {
        fread(&nano,sizeof(struct jugador),1,bajo);
        if(nano.altura <leido.altura)
            {
                nano=leido;
            }
    }
    printf("El mas bajo es:%s, %s , %d, %2.f",nano.nombre,nano.apellidos,nano.nacimiento.anho,nano.altura);
    fclose(bajo);
};

struct jugador * mostrar()
{
FILE * archivo;
struct jugador visto;
archivo = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
char tecla;
while (tecla!='#')
    {
        fread(&visto,sizeof(struct jugador),1,archivo);
        printf("El jugador es:%c, %c , %d, %2.f",visto.nombre,visto.apellidos,visto.nacimiento.anho,visto.altura);
    }
fclose(archivo);
};

main()
{
struct jugador datos;
int opcion;
FILE * Jugador;
char dato;
printf("Elija una opcion:");
scanf("%d",&opcion);
getchar();
switch(opcion)
    {
    case 1:
    nombre();
    break;
    case 2:
    Jugador = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
    fread(&datos,sizeof(struct jugador),1,Jugador);
    do
    {
        printf("Nombre: %s",datos.nombre);
        printf("\nApellidos: %s",datos.apellidos);
        printf("\nDia nacimiento: %d",datos.nacimiento.dia);
        printf("\nMes nacimiento: %d",datos.nacimiento.mes);
        printf("\nAnho nacimiento: %d",datos.nacimiento.anho);
        printf("\nAltura: %f",datos.altura);
        fread(&datos,sizeof(struct jugador),1,Jugador);
    }while(!feof(Jugador));
    fclose(Jugador);

    break;
    case 3:
    Jugador = fopen("C:\\Users\\Usuario\\Documents\\jugadores.txt","r");
    printf("Dame un nombre:");
    scanf("%c",datos.nombre);
    fread(&datos,sizeof(struct jugador),1,Jugador);
    printf("Nombre: %s",datos.nombre);
    printf("\nApellidos: %s",datos.apellidos);
    printf("\nDia nacimiento: %d",datos.nacimiento.dia);
    printf("\nMes nacimiento: %d",datos.nacimiento.mes);
    printf("\nAnho nacimiento: %d",datos.nacimiento.anho);
    printf("\nAltura: %.2f",datos.altura);
    break;
    case 4:
    masvet();
    break;
    case 5:
    masjoven();
    break;
    case 6:
    masalto();
    break;
    case 7:
    masbajo();
    break;
    case 8:
    mostrar();
    break;
    case 9:
    break;
    case 10:
    break;
    case 11:
    break;
    default:
    printf("Opcion incorrecta.");

    }

return 0;
}
