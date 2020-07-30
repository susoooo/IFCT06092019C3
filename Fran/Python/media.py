print ("Numero 1: ")
num1 = input()

print ("Numero 2: ")
num2 = input()

resultado = (int (num1) + int (num2)) / 2

print(resultado)

#---------------------------------------------------

print ("Peso: ")
peso = input()

print ("Altura: ")
altura = input()

imc = (int (peso) + int (altura)) / 2

print(imc)

#---------------------------------------------------

print ("Pies: ")
pies = input()

print ("Pulgadas: ")
pulgadas = input()

centimetros = (int (pies) * 12 + int (pulgadas)) * 2.54

print(centimetros)

#---------------------------------------------------

print ("Grados Fahrenheit: ")
fahr = input()



celsius = (int (fahr) - 32) / 1.8

print(celsius)

#---------------------------------------------------

print ("Segundos: ")
totalSegundos = input()

minutos = int (totalSegundos) // 60

segundos = int (totalSegundos) - (int (minutos) * 60)

print("Minutos: ", minutos, " - Segundos: ", segundos)

#---------------------------------------------------

print ("Segundos: ")
totalSegundos = input()

horas = int (totalSegundos) // 3600

totalSegundos = int(totalSegundos) - (int(horas) * 3600)

minutos = int (totalSegundos) // 60

segundos = int (totalSegundos) - (int (minutos) * 60)

print("Horas: ", horas, "Minutos: ", minutos, " - Segundos: ", segundos)

#---------------------------------------------------
