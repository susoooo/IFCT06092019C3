#4-Crea un programa que pida un número por pantalla. A continuación pida tantos nombres de personas como el número que se ha escrito por pantalla,y cree con ellos una lista. A continuación pedirá otro número, y otra vez tantos nombres como indique ese segundo número. Este segundo grupo de nombres los guardará en otra lista. A continuación, eliminará de la primera lista, aquellos nombres que se encuentren en la segunda lista. Finalmente imprimirá como ha quedado la primera lista.


nombres = []
print("Número de nombres?:")
num=int(input())

for n in range(num):
	print("Nombre ", n+1, ": ")
	nombres=nombres+[input()]
print("Nombres iniciales: ", nombres)

nombres2 = []
print("Número de otros nombres?")
num=int(input())
for n in range(num):
	print("Nombre ", n+1, ": ")
	nombres2=nombres2+[input()]
print("Nombres a eliminar: ", nombres2)

for n in range(num):
	while nombres2[n] in nombres:
		nombres.remove(nombres2[n])
		
print("Nombres finales: ",nombres)
