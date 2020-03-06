# Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el mayor o que escriba que son iguales.
numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
if numero1==numero2 :
    print("Los numeros son iguales")
else :
    if numero1>numero2 :
        mayor=numero1
        menor=numero2
    else :
        mayor=numero2
        menor=numero1
    print(mayor," es el mayor y ",menor," es el menor")