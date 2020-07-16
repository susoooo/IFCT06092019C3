print ("Introducir cuantas palabras va a introducir: ")
print ("Palabras: ")
palabras = input()

listaPalabras = ()
tuplaPalabras = ()

for num in range(0, int(palabras)):
    print ("Introduzca una palabra: ")
    palabra = input()
    
    listaPalabras = tuple([palabra])
    tuplaPalabras = tuplaPalabras + listaPalabras
    print (tuplaPalabras.count(palabra))

print (listaPalabras)

# ------------------------------------------------------------

