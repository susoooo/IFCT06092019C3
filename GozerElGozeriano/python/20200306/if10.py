#10-Escriba un programa que pregunte primero si se quiere calcular el área de un triángulo o la de un círculo. Si se contesta que se quiere calcular el área de un triángulo (escribiendo T o t), el programa tiene que pedir entonces la base y la altura y escribir el área. Si se contesta que se quiere calcular el área de un círculo (escribiendo C o c), el programa tiene que pedir entonces el radio y escribir el área. Se recuerda que el área de un triángulo es base por altura dividido por 2 y que el área de un círculo es Pi (aproximadamente 3,141592) por el radio al cuadrado.
#Nota: Utilice como valor de pi el valor 3.141592.

print("T) Cálculo del área del triangulo")
print("C) Cálculo del área del círculo")
option=input()

if(option=="T" or option=="t"):
	print("Base:")
	base=float(input())
	print("Altura:")
	altura=float(input())
	print("Area: ", (base*altura)/2.0)
else:
	if(option=="C" or option=="c"):
		print("Radio:")
		radio=float(input())
		print("Area: ", 3.141592 * (radio*radio))
	else:
		print("Opción no valida")
	
