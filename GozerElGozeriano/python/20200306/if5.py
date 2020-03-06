#5-Mejore el programa anterior haciendo que cuando la diferencia sea exactamente un año, escriba la frase en singular

print("Año 1:")
n1=int(input())
print("Año 2:")
n2=int(input())
diferencia=n1-n2
if(diferencia==1 or diferencia==-1):
	print("Falta ", -diferencia)
else:
	if(diferencia>0):
		print("Ha pasado : ", diferencia)
	else:
		if(diferencia<0):
			print("Faltan ", -diferencia)
		else:
			if(diferencia>0):
				print("Han pasado : ", diferencia)
			else:
				print("Son el mismo año.")
