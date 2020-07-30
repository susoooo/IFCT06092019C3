#1-Escribe un programa que cree una lista de palabras.
#Primero debe pedir por pantalla el número de elementos a incluir en la lista,
#pedir tantas palabras como se haya dicho en ese número,
#y crear una lista con dichas palabras.


print("Dígame cuántas palabras tiene la lista: ")
numero = int(input())

lista = []
for i in range(numero):
    print("Dígame la palabra", str(i + 1) + ": ", end="")
    palabra = input()
    lista += [palabra]
print("La lista creada es:", lista)



































   
