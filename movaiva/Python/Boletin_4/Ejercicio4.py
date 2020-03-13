# Escriba un programa que pregunte cuántos 
# números se van a introducir, pida esos 
# números y escriba cuántos negativos ha introducido.
iteracion=int(input("¿Cuantos números va a introducir?: "))
negativo=0
for i in range(iteracion):
    numero=int(input("Introduzca el numero: "))
    if numero < 0 :
        negativo+=1
if negativo!=1:
    cadena="negativos"
else :
    cadena="negativo"
print("Se ha introducido",negativo,cadena)