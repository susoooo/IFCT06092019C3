# Cree un programa que pida un numero por pantalla. 
# Pida tantos nombres como indica el numero y cree dos 
# listas, una que incluya los nombres en el mismo orden 
# en el que se han metido por pantalla y otra que los 
# incluya en orden inverso.
lista=[]
inversa=[]
numero=int(input("Introduzca el número de nombre que va a escribir: "))
for i in range(numero):
    nombre=input("Introduzca el nombre: ")
    lista=lista+[nombre]
for i in reversed(lista):
    inversa=inversa+[i]
print("Lista original: ",list(lista))
print("Lista inversa: ",list(inversa))