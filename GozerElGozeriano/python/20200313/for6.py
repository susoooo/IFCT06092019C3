#6-Escriba un programa que pregunte cuantos números se van a introducir, pida esos números y calcule su suma.

print("¿Cuantos números se van a introducir?")
n1=int(input())
suma=0

print("Pues venga: ")
for n in range(0,n1):
	print("Número: ")
	num=int(input())
	suma+=num
print("Suma ", suma)
