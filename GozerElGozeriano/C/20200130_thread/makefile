all: 20200130_1.c 20200130_2.c 20200130_3.c 20200130_4.c 20200130_5.c montecarlo.c
	gcc -pthread 20200130_1.c -o 1.out
	gcc -pthread 20200130_2.c -o 2.out
	gcc -pthread 20200130_3.c -o 3.out
	gcc -pthread 20200130_4.c -o 4.out
	gcc -pthread 20200130_5.c -o 5.out
	gcc -pthread montecarlo.c -o montecarlo.out

clean:
	rm *.out
