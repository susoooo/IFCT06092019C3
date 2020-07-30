# Escriba un programa que pregunte cuántos 
# números se van a introducir, pida esos 
# números, y muestre un mensaje cada vez 
# que un número no sea mayor que el primero
iteracion=int(input("¿Cuantos números va a introducir?: "))
if iteracion>=1:
    numero1=int(input("Introduuzca el numero: "))
for i in range(2,iteracion+1):
    otronumero=int(input("Introduzca el numero: "))
    if otronumero < numero1 :
        print(otronumero,"no es mayor que",numero1)
