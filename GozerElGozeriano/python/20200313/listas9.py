#9-Escribe un programa que pida una palabra por pantalla y muestre por pantalla una lista con las vocales y el número de veces que aparecen en la palabra.


vocales=[["a","e","i","o","u"],[0,0,0,0,0]]
print("Palabra:")
palabra=input()

for n in palabra:
	if(n in vocales[0]):
		vocales[1][vocales[0].index(n)] += 1
		
for n in range(len(vocales[0])):
	if(vocales[1][n]):
		print(vocales[0][n], ":", vocales[1][n])
