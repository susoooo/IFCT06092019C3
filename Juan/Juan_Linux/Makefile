all: CompilarHilos

CompilarHilos: e1hilos e2hilos e3hilos ejemplocreacionhilos ejemplohilos 

e1hilos:
	gcc e1hilos.c -o e1hilos.out -lpthread
e2hilos:
	gcc e2hilos.c -o e2hilos.out -lpthread
e3hilos:
	gcc e3hilos.c -o e3hilos.out -lpthread
ejemplocreacionhilos:
	gcc ejemplocreacionhilos.c -o ejemplocreacionhilos.out -lpthread
ejemplohilos:
	gcc ejemplohilos.c -o ejemplohilos.out -lpthread

clean: e1hilos.out e2hilos.out e3hilos.out ejemplocreacionhilos.out ejemplocreacionhilos.out ejemplohilos.out



