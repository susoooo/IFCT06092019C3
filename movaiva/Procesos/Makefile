all: execprog1 execprog2 forkprog1 forkprog2 forkprog Proceso1 Proceso2 Proceso3 prog1 prog2 prog3 prog4
execprog1: execprog1.c
	gcc execprog1.c -o execprog1.out
execprog2: execprog2.c
	gcc execprog2.c -o execprog2.out
forkprog1: forkprog1.c
	gcc forkprog1.c -o frokprog1.out
forkprog2: forkprog2.c
	gcc forkprog2.c -o frokprog2.out
forkprog: forkprog.c 
	gcc forkprog.c -o forkprog.out
Proceso1: Proceso1.c
	gcc Proceso1.c -o Proceso1.out
Proceso2: Proceso2.c
	gcc Proceso2.c -o Proceso2.out
Proceso3: Proceso3.c
	gcc Proceso3.c -o Proceso3.out
prog1: prog1.c
	gcc prog1.c -o prog1.out
prog2: prog2.c
	gcc prog2.c -o prog2.out
prog3: prog3.c
	gcc prog3.c -o prog3.out
prog4: prog4.c
	gcc prog4.c -o prog4.out
clean:
	rm *.out
