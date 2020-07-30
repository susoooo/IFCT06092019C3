#3-Escriba un programa que pida una distancia en pies y pulgadas y que escriba esa distancia en centímetros.Un pie son doce pulgadas y una pulgada son 2,54 cm.

print("Distancia en pies:")
pies = float(input())
print("Distancia en pulgadas:")
pulgadas = float(input())
print("Distancia en cm: ", (pies*12+pulgadas)*2.54)
