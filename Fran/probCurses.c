#include "ncurses.h"

int main(int argc, char *argv[]){

      initscr();
      int t;

      while((t=getch())!=27)
      {
            move(5,0);
            printw("Codigo ASCII: %d  Caracter: %c \n", t, t);
            move(0,0);
            printw("Presiona ESC para terminar... ");
       }

      endwin();
      return 0;
}
