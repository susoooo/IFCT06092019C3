#4-Escriba un programa que pregunte cuántos números se van a introducir, pida esos números y escriba cuántos negativos ha introducido.

print("¿Cuantos números se van a introducir?")
n1=int(input())
negativos=0
print("Pues venga: ")
for n in range(0,n1):
	print("Número: ")
	num=int(input())
	if(num<0):
		negativos+=1
print("Negativos ", negativos)
