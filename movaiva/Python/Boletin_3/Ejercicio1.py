# Escriba un programa que pida dos números enteros 
# y escriba qué números son pares y cuáles impares 
# desde el primero hasta el segundo
numero1=int(input("Introduzca el primer número: "))
numero2=int(input("Introduzca el segundo número: "))
if numero1>numero2 :
    mayor=numero1
    menor=numero2
else :
    mayor=numero2
    menor=numero1
while menor <= mayor :
    if menor%2==0 :
        print(menor,"es par")
    else :
        print(menor,"es impar")
    menor+=1