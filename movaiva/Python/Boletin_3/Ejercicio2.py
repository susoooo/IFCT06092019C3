#Escriba un programa que pida un número 
# entero mayor que cero y que escriba 
# sus divisores.
numero=int(input("Introduzca un número entero mayor que cero: "))
while numero<=0 :
    numero=int(input("Error.Introduzca un número entero mayor que cero: "))
divisor=numero
while divisor>=1 :
    if numero%divisor==0 :
        print(divisor,"es divisor de",numero)
    divisor-=1