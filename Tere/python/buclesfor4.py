#4-Escriba un programa que pregunte cuántos números se van a introducir,
#pida esos números y escriba cuántos negativos ha introducido.

print("NÚMEROS NEGATIVOS")

print("¿Cuántos valores va a introducir?")
cantidad= int(input())

negativos=0

for i in range(1, cantidad + 1):
    print("Escriba numero: ")
    numero= int(input())

    if numero < 0:
        negativos = negativos + 1

if negativos == 0:
    print("No ha escrito ningún número negativo.")
else:
    print(f"Ha escrito {negativos} números negativos.")
    
    





























   
