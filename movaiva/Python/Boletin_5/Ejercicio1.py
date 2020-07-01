# Escriba un programa que pida dos números 
# enteros. El programa pedirá de nuevo el 
# segundo número mientras no sea mayor que 
# el primero. El programa terminará escribiendo 
# los dos números.
numero1=int(input("Introduzca el primero número: "))
numero2=int(input("Introduzca el segundo número: "))
while numero2<numero1:
    print("Error el numero debe se mayor que",numero1)
    numero2=int(input("Introduzca el segundo número: "))
