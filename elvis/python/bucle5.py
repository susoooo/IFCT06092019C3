# Escriba un programa que pregunte cuántos números se van a introducir, pida esos números
# y escriba cuántos negativos ha introducido.

print("NÚMEROS NEGATIVOS")
numero = int(input("¿Cuántos valores va a introducir? "))


if numero < 0:
    print("¡Imposible!")

else:
    contador = 0
    for i in range(1, numero + 1):
        valor = float(input(f"Escriba el número {i}: "))
        if valor < 0:
            contador = contador + 1

if contador == 0:
    print("No ha escrito ningún número negativo.")
elif contador == 1:
    print("Ha escrito 1 número negativo.")
else:
    print(f"Ha escrito {contador} números negativos.")
