#2-Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.

print("Escribe entero mayor de 0:")
n1=int(input())

print("Divisores: ")
for n in range(1,n1):
	if(n1%n==0):
		print(n)

