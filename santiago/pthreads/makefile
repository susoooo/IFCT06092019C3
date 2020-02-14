all: eh eh2 eh3 pth pth1 pth2 pth3

eh: ejercicio_hilos2.c
	gcc ejercicio_hilos2.c -o ejercicio_hilos2.out -lpthread

eh2: ejercicio_hilos3.c
	gcc ejercicio_hilos3.c -o ejercicio_hilos3.out -lpthread

eh3: ejercicio_hilos4.c
	gcc ejercicio_hilos4.c -o ejercicio_hilos4.out -lpthread

pth: pthreads.c
	gcc pthreads.c -o pthreads.out -lpthread

pth1: pthreads1.c
	gcc pthreads1.c -o pthreads1.out -lpthread

pth2: pthreads2.c
	gcc pthreads2.c -o pthreads2.out -lpthread

pth3: pthreads3.c
	gcc pthreads3.c -o pthreads3.out -lpthread

clean:
	rm ejercicio_hilos*.c
	rm pthread*.c
