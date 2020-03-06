#4-Escriba un programa que pida el año actual y un año cualquiera y que escriba cuántos años han pasado desde ese año o cuántos años faltan para llegar a ese año.

print("Año 1:")
n1=int(input())
print("Año 2:")
n2=int(input())
diferencia=n1-n2
if(diferencia<0):
	print("Faltan ", -diferencia)
else:
	if(diferencia>0):
		print("Han pasado : ", diferencia)
	else:
		print("Son el mismo año.")
