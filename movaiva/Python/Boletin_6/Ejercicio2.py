# Amplia el programa anterior, para que una vez 
# creada la lista, se pida por pantalla una palabra 
# y se diga cuantas veces aparece dicha palabra en la lista.
lista=[]
iteracion=int(input("Introduzca el numero de palabras que va a escribir: "))
while iteracion>0:
    palabra=input("Introduzca la palabra: ")
    lista=lista+[palabra]
    iteracion-=1
palabra=input("Introduzca la palabra que quiere buscar: ")
print(palabra,"aparece",lista.count(palabra))
