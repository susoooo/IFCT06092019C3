#2-Amplia el programa anterior, para que una vez creada la lista,
#se pida por pantalla una palabra
#y se diga cuantas veces aparece dicha palabra en la lista.

print("Dígame cuántas palabras tiene la lista: ")
numero = int(input())

lista = []
for i in range(numero):
    print("Dígame la palabra", str(i + 1) + ": ", end="")
    palabra = input()
    lista += [palabra]
print("La lista creada es:", lista)

buscar = input("Dígame la palabra a buscar: ")
contador = 0
for i in lista:
    if i == buscar:
        contador += 1;
if contador == 0:
    print("La palabra '" + buscar + "' no aparece en la lista.")
else:
    print("La palabra '" + buscar + "' aparece", contador, "veces en la lista")



