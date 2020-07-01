#7-Cree un programa que permita crear dos listas especificando el número de elmentos que tienen y los elementos. A continuación generar A)una lista con las palabras que están en las dos listas B)Una lista con las palabras que solo están en la primera lista C)Una lista con las palabras que solo están en la segunda lista. En las listas A) B) y C) los elementos apareceran una sola vez.


lista1 = []
lista2 = []
listarep=[]
listaonly1=[]
listaonly2=[]
print("Número de palabras lista 1:")
num=int(input())
for n in range(num):
	print("Palabaras ", n+1, ": ")
	lista1=lista1+[input()]
print("Palabras 1: ", lista1)

print("Número de palabras lista 2:")
num=int(input())
for n in range(num):
	print("Palabras ", n+1, ": ")
	lista2=lista2+[input()]
print("Palabras 2: ", lista2)

for n in range(len(lista1)):
	if(lista1[n] in lista2):
		if(not lista1[n] in listarep):
			listarep=listarep+[lista1[n]]
	else:
		if(not lista1[n] in listaonly1):
			listaonly1=listaonly1+[lista1[n]]
		
for n in range(len(lista2)):
	if(not lista2[n] in lista1):
		if(not lista2[n] in listaonly2):
			listaonly2=listaonly2+[lista2[n]]

print("Palabras repetidas: ",listarep)
print("Palabras no repetidas en 1: ",listaonly1)
print("Palabras no repetidas en 2: ",listaonly2)

