# Escribe un programa que cree una lista de palabras. Primero debe pedir por pantalla el número
# de elementos a incluir en la lista,
# pedir tantas palabras como se haya dicho en ese número, y crear una lista con dichas palabras.

numero = int(input("Dígame cuántas palabras tiene la lista: "))

if numero < 1:
    print("¡Imposible!")
else:
    lista = []
    for i in range(numero):
        print("Dígame la palabra", str(i + 1) + ": ", end="")
        palabra = input()
        lista += [palabra]
    print("La lista creada es:", lista)

print("Gracias por usar el programa creado por KillerPro")
