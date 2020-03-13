# Crea un programa que pida un número por pantalla. 
# A continuación pida tantos nombres de personas como 
# el número que se ha escrito por pantalla,y cree con 
# ellos una lista. A continuación pedirá otro número, 
# y otra vez tantos nombres como indique ese segundo 
# número. Este segundo grupo de nombres los guardará 
# en otra lista. A continuación, eliminará de la primera 
# lista, aquellos nombres que se encuentren en la segunda 
# lista. Finalmente imprimirá como ha quedado la primera lista.
lista1=[]
lista2=[]
numero=int(input("Introduzca el número de nombres que va a escribir: "))
for i in range(numero):
    nombre=input("Introduzca el nombre para la primera lista: ")
    lista1=lista1+[nombre]
print("Lista 1: ",list(lista1))
for i in range(numero):
    nombre=input("Introduzca el nombre para la segunda lista: ")
    lista2=lista2+[nombre]
print("Lista 2: ",list(lista2))
for i in lista2:
    if lista1.count(i)>0 :
        lista1[lista1.index(i)]=""
print (list(lista1))