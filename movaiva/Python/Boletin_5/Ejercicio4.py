# Escriba un programa que pida primero dos números 
# enteros (mínimo y máximo) y que después pida números 
# enteros situados entre ellos. El programa terminará 
# cuando se escriba un número que no esté comprendido 
# entre los dos valores iniciales. El programa termina 
# escribiendo la cantidad de números escritos.
numero1=int(input("Introduzca el primer número: "))
numero2=int(input("Introduzca el segundo número: "))
contador=0
if numero1>numero2:
    mayor=numero1
    menor=numero2
else:
    mayor=numero2
    menor=numero1
print("Introduzca un numero entre",menor,"y",mayor)
otronumero=int(input())
while otronumero>=menor and otronumero<=mayor:
    contador+=1
    print("Introduzca un numero entre",menor,"y",mayor)
    otronumero=int(input())
if contador!=1:
    cadena="números"
else:
    cadena="número"
print("Se han introducido",contador,cadena)