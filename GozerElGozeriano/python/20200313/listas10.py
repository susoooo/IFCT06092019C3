#10-Escribe un programa que pida una palabra por pantalla y muestre por patnalla una lista con las consonantes, y el número de veces que aprecen en la palabra.


consonantes=[["b","c","d","f","g","h","j","k","l","m","n","ñ","p","q","r","s","t","v","w","x","y","z"],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]]
print("Palabra:")
palabra=input()

for n in palabra:
	if(n in consonantes[0]):
		consonantes[1][consonantes[0].index(n)] += 1

for n in range(len(consonantes[0])):
	if(consonantes[1][n]):
		print(consonantes[0][n], ":", consonantes[1][n])
