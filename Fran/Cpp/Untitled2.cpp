
Código:ExpandirExpandit todoContraerSeleccionar todo
#include <stdio.h>
#include <bios.h>
#include <conio.h>
#include <ctype.h>

/* Caracteres especiales */
#define _BKSPC 0xe08   /* BACKSPACE ( tecla Retroceso) */
#define _TAB   0xf09   /* TAB */
#define _ENTER 0x10d   /* ENTER */
#define _ESC   0x11b   /* ESCAPE */
#define _ESP   0x3920  /* ESPACIO */

/* Teclas de codigo extendido */
#define _ARR  0x4800
#define _ABJ  0x5000
#define _IZQ  0x4b00
#define _DER  0x4d00

#define _INS  0x5200
#define _DEL  0x5300
#define _HOME 0x4700
#define _END  0x4f00
#define _PGUP 0x4900
#define _PGDN 0x5100

#define _F1  0x3b00
#define _F2  0x3c00
#define _F3  0x3d00
#define _F4  0x3e00
#define _F5  0x3f00
#define _F6  0x4000
#define _F7  0x4100
#define _F8  0x4200
#define _F9  0x4300
#define _F10 0x4400

int ObtenerTecla()
{
   int tecla;

   /* Espera a que una tecla sea presionada */
   while (_bios_keybrd(_KEYBRD_READY) == 0);

   /* Obtiene la tecla presionada */
   tecla = _bios_keybrd(_KEYBRD_READ);

   /* Si es alfanumerico retorna el codigo ASCII,
      por ejemplo para 'A', retornara 65 */
   if (isalnum(tecla & 0xFF)) return (char)tecla;

   /* Retorna el codigo de la tecla presionada */
   return tecla;
}

void main()
{
   clrscr();

   int c = ObtenerTecla();

   if(c==_ARR)
   {
      printf("ARRIBA");
   }
   else if(c==_ABJ)
   {
      printf("ABAJO");
   }
   else if(c==_IZQ)
   {
      printf("IZQUIERDA");
   }
   else if(c==_DER)
   {
      printf("DERECHA");
   }
   else if(c==_ESC)
   {
      printf("ESCAPE");
   }
   else if(c==_F7)
   {
      printf("F7");
   }
   else if(c=='A')
   {
      printf("A");
   }
   else if(c=='5')
   {
      printf("5");
   }

   /* Similar a getch */
   ObtenerTecla();

   clrscr();
}
