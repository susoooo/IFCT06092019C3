# 2-Escriba un programa que pida el peso (en kilogramos)
# y la altura (en metros) de una persona
# y que calcule su índice de masa corporal (imc).
# El imc se calcula con la fórmula imc = peso / altura 2


print("Escriba el peso en kg: ")
peso=input()


print("Escriba la altura (en metros): ")
altura=input()

IMC = float(peso)/ (float(altura)* 2)
print (IMC)

