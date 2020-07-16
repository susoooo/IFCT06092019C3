# Escribe un programa que pida una palabra por pantalla 
# y muestre por pantalla una lista con las vocales y el 
# número de veces que aparecen en la palabra.
vocales=['a','e','i','o','u']
venp=[]
palabra=input("Introduzca la palabra: ")
for letra in palabra:
    letra=letra.lower()
    if (letra in vocales) :
        temporal=[letra,palabra.count(letra)]
        if temporal not in venp:
            venp.append(temporal)
print("Vocales en palabra: ",list(venp))