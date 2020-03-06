# Escriba un programa que pida dos números enteros y que escriba si el mayor es múltiplo del menor.
numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
if numero1>=numero2 :
    mayor=numero1
    menor=numero2
else :
    mayor=numero2
    menor=numero1
if mayor%menor :
    print(mayor,"no es multiplo de",menor)
else :
    print(mayor,"es multiplo de",menor)