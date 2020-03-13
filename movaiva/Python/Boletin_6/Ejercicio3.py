# Amplia el programa anterior para que, una vez 
# encontrada una palabra, pida otra palabra, y 
# substituya la segunda palabra por la primera 
# en la lista inicial.
lista=[]
iteracion=int(input("Introduzca el numero de palabras que va a escribir: "))
while iteracion>0:
    palabra=input("Introduzca la palabra: ")
    lista=lista+[palabra]
    iteracion-=1
palabra=input("Introduzca la palabra que quiere buscar: ")
print(palabra,"aparece",lista.count(palabra))
palabra=input("Introduzca la palabra para substituir: ")
lista[0]=palabra
print(list(lista))