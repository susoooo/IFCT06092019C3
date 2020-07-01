# Escriba un programa que pregunte cuántos 
# números se van a introducir, pida esos 
# números, y diga al final cuántos han 
# sido pares y cuántos impares.
iteracion=int(input("¿Cuantos números va a introducir?: "))
par=0
impar=0
for i in range(iteracion):
    numero=int(input("Introduzca el numero: "))
    if numero%2==0:
        par+=1
    else:
        impar+=1
if par!=1:
    cadena1="números pares"
else:
    cadena1="número par"
if impar!=1:
    cadena2="números impares"
else:
    cadena2="número impar"

print("Se han introducido",par,cadena1,"y",impar,cadena2)

        