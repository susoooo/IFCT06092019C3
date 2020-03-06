# Escriba un programa que pregunte primero si se 
# quiere calcular el área de un triángulo o la de 
# un círculo. Si se contesta que se quiere calcular 
# el área de un triángulo (escribiendo T o t), el 
# programa tiene que pedir entonces la base y la 
# altura y escribir el área. Si se contesta que 
# se quiere calcular el área de un círculo 
# (escribiendo C o c), el programa tiene que 
# pedir entonces el radio y escribir el área. 
# Se recuerda que el área de un triángulo es base
# por altura dividido por 2 y que el área de un 
# círculo es Pi (aproximadamente 3,141592) por 
# el radio al cuadrado.
# Nota: Utilice como valor de pi el valor 3.141592.

print("-------MENÚ-------")
print("T o t. Triángulo")
print("C o c. Círculo")
opcion=input("Introduzca una opción: ")
if opcion!="T" and opcion!="t" and opcion!="C" and opcion!="c":
    print("La opción no es válida")
else:
    if opcion=="T" or opcion=="t":
        base=float(input("Introduzca la base: "))
        altura=float(input("Introduzca la altura: "))
        area=base*altura/2
    else: 
        pi=3.141592
        radio=float(input("Introduzca el radio: "))
        area=pi*radio*radio
    print("El área es:",area)
