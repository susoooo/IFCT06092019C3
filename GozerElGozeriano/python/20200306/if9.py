#9- Escriba un programa que pida un año y que escriba si es bisiesto o no. Se recuerda que los años bisiestos son múltiplos de 4, pero los múltiplos de 100 no lo son, aunque los múltiplos de 400 sí.

print("Año:")
n1=int(input())

if(n1%4):
	print("No es bisiesto.")
else:
	if(not n1%100):
		if(not n1%400):
			print("Es bisiesto")
		else:
			print("No es bisiesto")
	else:
		print("Es bisiesto")
	
