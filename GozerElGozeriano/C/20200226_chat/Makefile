all: client.c server.c incldef.h
	gcc client.c -o client.o
	gcc -pthread server.c -o server.o
clean:
	rm *.o
