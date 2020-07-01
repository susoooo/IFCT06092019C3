#4-Escriba un programa que pida primero dos números enteros (mínimo y máximo) y que después pida números enteros situados entre ellos. El programa terminará cuando se escriba un número que no esté comprendido entre los dos valores iniciales. El programa termina escribiendo la cantidad de números escritos.

print("Número entero mínimo:")
n1=int(input())
print("Número entero máximo:")
n2=int(input())
n3=n1
nums=0
while n1<=n3<=n2:
	print("Número entero:")
	n3=int(input())
	nums+=1
print("Numeros: ",nums)
