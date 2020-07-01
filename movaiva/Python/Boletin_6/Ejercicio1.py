# Escribe un programa que cree una lista 
# de palabras. Primero debe pedir por pantalla 
# el número de elementos a incluir en la lista, 
# pedir tantas palabras como se haya dicho en 
# ese número, y crear una lista con dichas palabras.
lista=[]
iteracion=int(input("Introduzca el numero de palabras que va a escribir: "))
while iteracion>0:
    palabra=input("Introduzca la palabra: ")
    lista=lista+[palabra]
    iteracion-=1
print(list(lista))