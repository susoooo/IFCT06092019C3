obj-m := nothing.o

proceso: proceso*.c
	gcc proceso.c -o proceso.out 
	gcc procesohijos.c -o procesohijos.out 	
	
hebras: hebras*.c
	gcc hebras.c -o hebras.out -lpthread
	gcc hebras1.c -o hebras1.out -lpthread

bloques: bloques.c
	gcc bloques.c -o bloques.out

prog:	prog*.c
	gcc prog1.c -o prog1.out
	gcc prog2.c -o prog2.out
	gcc prog3.c -o prog3.out
	gcc prog4.c -o prog4.out

execpro:execprog2.c
	gcc execprog2.c -o execprog2.out

factorial:factorial.c
	gcc factorial.c -o factorial.out -lpthread
clean:
	rm proceso.out
	rm procesohijos.out
	rm hebras.out
	rm hebras1.out
	rm bloques.out
	rm prog1.out
	rm prog2.out
	rm prog3.out
	rm prog4.out
	rm execprog2.out
	rm factorial.out
	


