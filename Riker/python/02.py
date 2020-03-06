# 2-Escriba un programa que pida el peso (en kilogramos) y la altura (en metros) de una persona y que calcule su índice de masa corporal (imc). El imc se calcula con la fórmula imc = peso / altura 2

kg = int(input("Kg? "))
h = int(input("Height? "))

print("IMC = ", kg / (h * 2))
