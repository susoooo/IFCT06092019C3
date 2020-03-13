# Escriba un programa que pregunte cuantos números 
# se van a introducir, pida esos números y calcule su suma.
iteracion=int(input("¿Cuantos números va a introducir?: "))
suma=0
for i in range(iteracion):
    numero=int(input("Introduzca el numero: "))
    suma+=numero
print("La suma es",suma)