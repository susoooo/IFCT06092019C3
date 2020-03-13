# Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.
numero=int(input("Introduzca un número entero mayor que cero: "))
while numero<=0 :
    numero=int(input("Error.Introduzca un número entero mayor que cero: "))
for i in range(1,numero+1) :
    if numero%i==0 :
        print(i,"es divisor de",numero)