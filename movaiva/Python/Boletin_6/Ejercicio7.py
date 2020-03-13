# Cree un programa que permita crear dos listas especificando 
# el número de elmentos que tienen y los elementos. A continuación 
# generar: 
# A)una lista con las palabras que están en las dos listas 
# B)Una lista con las palabras que solo están en la primera lista 
# C)Una lista con las palabras que solo están en la segunda lista. 
# En las listas A) B) y C) los elementos apareceran una sola vez.
lista1=[]
lista2=[]
A=[]
B=[]
C=[]
numero=int(input("Introduzca el número de nombre que va a escribir en la lista 1: "))
for i in range(numero):
    nombre=input("Introduzca el nombre: ")
    lista1=lista1+[nombre]
print("Lista 1:",list(lista1))
numero=int(input("Introduzca el número de nombre que va a escribir en la lista 2: "))
for i in range(numero):
    nombre=input("Introduzca el nombre: ")
    lista2=lista2+[nombre]
print("Lista 2:",list(lista2))
for i in lista1:
    if lista2.count(i)>0:
        A=A+[i]
    if lista2.count(i)==0:
        B=B+[i]
for i in lista2:
    if lista1.count(i)==0:
        C=C+[i]
print("A:",list(A))
print("B:",list(B))
print("C:",list(C))
