#3-Escriba un programa que pregunte cuántos números se van a introducir, pida esos números, y muestre un mensaje cada vez que un número no sea mayor que el primero

print("¿Cuantos números se van a introducir?")
n1=int(input())

print("Pues venga: ")
for n in range(0,n1):
	print("Número: ")
	num=int(input())
	if(n==0):
		max=num
	else:
		if(num>max):
			print("Es mayor!")

