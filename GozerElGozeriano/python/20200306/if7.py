#7-Mejore el programa anterior haciendo que el programa avise cuando se escriben valores negativos o nulos.

print("Nº 1:")
mayor=int(input())

if(mayor<0):
	print("Error")
else:
	print("Nº 2:")
	menor=int(input())
	if(menor<0):
		print("Error")
	else:
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

