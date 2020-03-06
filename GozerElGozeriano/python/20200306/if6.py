#6-Escriba un programa que pida dos números enteros y que escriba si el mayor es múltiplo del menor.

print("Nº 1:")
mayor=int(input())
print("Nº 2:")
menor=int(input())

if(mayor==menor):
	print("Son iguales.")
else:
	if(mayor<menor):
		aux=mayor
		mayor=menor
		menor=aux
	if(not mayor%menor):
		print(mayor," es múltiplo de ",menor)
	else:
		print(mayor," NO es múltiplo de ",menor)
