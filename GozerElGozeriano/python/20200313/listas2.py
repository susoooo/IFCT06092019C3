#2-Amplia el programa anterior, para que una vez creada la lista, se pida por pantalla una palabra y se diga cuantas veces aparece dicha palabra en la lista.


palabras = []
print("Número de palabras?:")
num=int(input())

for n in range(num):
	print("Palabra ", n+1, ": ")
	palabras=palabras+[input()]

print(palabras)

print("Buscar palabra: ")
search=input()
print("Concurrencia: ", palabras.count(search))
