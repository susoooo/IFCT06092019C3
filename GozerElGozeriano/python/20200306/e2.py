#2-Escriba un programa que pida el peso (en kilogramos) y la altura (en metros) de una persona y que calcule su índice de masa corporal (imc). El imc se calcula con la fórmula imc = peso / altura 2

print("Peso: (kg)")
peso = float(input())
print("Altura: (m)")
altura = float(input())
print("imc: ",peso/(altura*altura))
