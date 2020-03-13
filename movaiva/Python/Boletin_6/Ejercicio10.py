# Escribe un programa que pida una palabra por 
# pantalla y muestre por patnalla una lista con 
# las consonantes, y el número de veces que aprecen 
# en la palabra.
vocales=['a','e','i','o','u']
cenp=[]
palabra=input("Introduzca la palabra: ")
for letra in palabra:
    if (letra not in vocales) :
        temporal=[letra,palabra.count(letra)]
        if temporal not in cenp:
            cenp.append(temporal)
print("Consonantes en palabra: ",list(cenp))