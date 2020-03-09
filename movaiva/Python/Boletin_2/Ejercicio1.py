# Escriba un programa que pida dos números enteros y que calcule su división, escribiendo si la división es exacta o no.

numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
division=numero1/numero2
print("Divsion: ",division)
if bool(numero1%numero2) :
    print("La division no es exacta")
else :
    print("La division es exacta")
    