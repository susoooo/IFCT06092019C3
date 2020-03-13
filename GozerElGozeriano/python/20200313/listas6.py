#6-Cree un programa que pida un  numero por pantalla. Pida tantos nombres como indica el numero y cree dos listas, una que incluya los nombres en el mismo orden en el que se han metido por pantalla y otra que los incluya en orden inverso.


nombres = []
print("Número de nombres?:")
num=int(input())
for n in range(num):
	print("Nombre ", n+1, ": ")
	nombres=nombres+[input()]
print("Nombres: ", nombres)
nombres2=nombres
nombres2.reverse()
print("Nombres al reverso: ",nombres2)
