#1-Escriba un programa que pida dos números enteros y que calcule su división, escribiendo si la división es exacta o no.

print("Nº 1:")
n1=int(input())
print("Nº 2:")
n2=int(input())
if(not n1%n2):
	print("Division exacta")
else:
	print("División no exacta")
print("Resultado: ",n1/n2);
