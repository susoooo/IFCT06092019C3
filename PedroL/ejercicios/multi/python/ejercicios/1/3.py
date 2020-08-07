print("distancia (pies y pulgadas): ")
print("pies: ")
pies = float(input())

print("pulgadas: ")
pulg = float(input())

pulg += (pies * 12)
centmtr = pulg * 2.54
print("distancia (centimetros): ", centmtr)