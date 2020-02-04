obj-m := nothing.o

all: CompilarHilos

CompilarHilos: e1hilos e2hilos e3hilos ejemplocreacionhilos ejemplohilos ejercicio1-7 ejercicio1-8 ejercicio2-4 execproc1 execprog1 execprog2 forkprog1 

e1hilos:
	gcc e1hilos.c -o e1hilos -lpthread
	chmod 777 e1hilos
e2hilos:
	gcc e2hilos.c -o e2hilos -lpthread
	chmod 777 e2hilos
e3hilos:
	gcc e3hilos.c -o e3hilos -lpthread
	chmod 777 e3hilos
ejemplocreacionhilos:
	gcc ejemplocreacionhilos.c -o ejemplocreacionhilos -lpthread
	chmod 777 ejemplocreacionhilos
ejemplohilos:
	gcc ejemplohilos.c -o ejemplohilos -lpthread
	chmod 777 ejemplohilos
ejercicio1-7:
	gcc ejercicio1-7.c -o ejercicio1-7
	chmod 777 ejercicio1-7
ejercicio1-8:
	gcc ejercicio1-8.c -o ejercicio1-8
	chmod 777 ejercicio1-8
ejercicio2-4:
	gcc ejercicio2-4.c -o ejercicio2-4
	chmod 777 ejercicio2-4
execproc1:
	gcc execproc1.c -o execproc1
	chmod 777 execproc1
execprog1:
	gcc execprog1.c -o execprog1
	chmod 777 execprog1
execprog2::
	gcc execprog2.c -o execprog2
	chmod 777 execprog2
forkprog1:
	gcc forkprog1.c -o forkprog1
	chmod 777 forkprog1

clean:
	rm e1hilos
	rm e2hilos
	rm e3hilos
	rm ejemplocreacionhilos
	rm ejemplohilos
	rm ejercicio1-7
	rm ejercicio1-8
	rm ejercicio2-4
	rm execproc1
	rm execprog1
	rm execprog2
	rm forkprog1




