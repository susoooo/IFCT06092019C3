# 3-Escriba un programa que pida una distancia en pies y pulgadas y que escriba esa distancia en centímetros.Un pie son doce pulgadas y una pulgada son 2,54 cm.

feet = int(input("Feets? "))
inchs = int(input("Inchs? "))

print("Centimeters: ", ((feet*12)+inchs)*2.54)
