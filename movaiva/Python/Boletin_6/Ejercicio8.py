# Cree un programa que pida un número y a continuació 
# genere una lista con todos los números primos desde él hasta el 0.
primos=[]
numero=int(input("Introduzca un número: "))
for i in range(numero+1):
    contador=0
    for j in range(1,i+1):
        if i%j==0:
            contador+=1
    if contador==2:
        primos=primos+[i]
print("Primos: ",list(primos))