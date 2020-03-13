#5-Escriba un programa que pregunte cuántos números se van a introducir, pida esos números, y diga al final cuántos han sido pares y cuántos impares.

print("¿Cuantos números se van a introducir?")
n1=int(input())
pares=0
impares=0
print("Pues venga: ")
for n in range(0,n1):
	print("Número: ")
	num=int(input())
	if(num%2==0):
		pares+=1
	else:
		impares+=1
print("Pares ", pares)
print("Impares ", impares)
