# Escriba un programa que pida la cantidad 
# de números positivos que se tienen que 
# escribir y a continuación pida números 
# hasta que se haya escrito la cantidad 
# de números positivos indicada.
iteracion=int(input("Introduzca la cantidad de número positivos que va a escribir: "))
while iteracion>0 :
    numero=int(input("Introduzca el número: "))
    if numero > 0:
        iteracion-=1