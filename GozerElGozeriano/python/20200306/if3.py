#3-Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el mayor o que escriba que son iguales.

print("Nº 1:")
n1=int(input())
print("Nº 2:")
n2=int(input())
if(n1<n2):
	print("El mayor es ", n2)
else:
	if(n1>n2):
		print("El mayor es ", n1)
	else:
		print("Son iguales.")
			
