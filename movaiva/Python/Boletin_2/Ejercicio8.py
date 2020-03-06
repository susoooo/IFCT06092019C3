# Escriba un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos.
numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
numero3=int(input("Introduzca el tercer numero: "))
if numero1==numero2 and numero2==numero3:
    print("Los tres numero son iguales")
else :
    if numero1==numero2 or numero1==numero3 or numero2==numero3:
        print("Hay dos numero iguales")
    else:
        print("Los tres numero son distintos")