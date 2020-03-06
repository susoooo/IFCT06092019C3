#2-Mejore el programa anterior haciendo que tenga en cuenta que no se puede dividir por cero

print("Nº 1:")
n1=int(input())
print("Nº 2:")
n2=int(input())
if(n2):
	if(not n1%n2):
		print("Division exacta")
	else:
		print("División no exacta")
	print("Resultado: ",n1/n2);
else:
	print("Division por 0")
