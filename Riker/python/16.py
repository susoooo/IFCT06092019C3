# 10-Escriba un programa que pregunte primero si se quiere calcular el área de un triángulo o la de un círculo. Si se contesta que se quiere calcular el área de un triángulo (escribiendo T o t), el programa tiene que pedir entonces la base y la altura y escribir el área. Si se contesta que se quiere calcular el área de un círculo (escribiendo C o c), el programa tiene que pedir entonces el radio y escribir el área. Se recuerda que el área de un triángulo es base por altura dividido por 2 y que el área de un círculo es Pi (aproximadamente 3,141592) por el radio al cuadrado.
# Nota: Utilice como valor de pi el valor 3.141592.

PI = 3.141592

shape = input("T: triangle ,, C: circle? ")

if (shape == "T" or shape == "t" or shape == "C" or shape == "c"):
    if (shape == "T" or shape == "t"):
        base = int(input("Base? "))
        height = int(input("Height? "))
        print("Triangle area: ", (base*height)/2)
    else:
        radio = float(input("Radio? "))
        print("Circle area: ", PI*radio*radio)
else:
    print("Bad option. Bye!")
