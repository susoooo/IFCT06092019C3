#3-Amplia el programa anterior para que, una vez encontrada una palabra, pida otra palabra, y substituya la segunda palabra por la primera en la lista inicial.


palabras = []
print("Número de palabras?:")
num=int(input())

for n in range(num):
	print("Palabra ", n+1, ": ")
	palabras=palabras+[input()]

print(palabras)

print("Sustituir palabra: ")
search=input()
if(search in palabras):
	print("Por palabra: ")
	newpalabra=input()

	palabras[palabras.index(search)]=newpalabra

	print(palabras)
else:
	print("Palabra no encontrada.")
