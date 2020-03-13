#1-Escribe un programa que cree una lista de palabras. Primero debe pedir por pantalla el número de elementos a incluir en la lista, pedir tantas palabras como se haya dicho en ese número, y crear una lista con dichas palabras.


palabras = []
print("Número de palabras?:")
num=int(input())

for n in range(num):
	print("Palabra ", n+1, ": ")
	palabras=palabras+[input()]

print(palabras)
