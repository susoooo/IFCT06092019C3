#3-Escriba un programa que pida una distancia en pies y pulgadas y
#que escriba esa distancia en centímetros.Un pie son doce pulgadas
#y una pulgada son 2,54 cm.

print("Escribe una distancia en pies: ")
pies= input()

print("Escribe una distancia en pulgadas: ")
pulgadas= input()

convcm= ((float(pies) * 12) + float(pulgadas))*2.54
print (convcm)


