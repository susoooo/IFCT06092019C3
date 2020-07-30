print("Escribe un numero: ")
num = input()
print("Escribe otro numero: ")
num1 = input()
if (int(num1 )):
    resto = (int(num)% (int(num1)))
    if (resto):
        print("La division no exacta")
    else :
        print("La division es exacta")
else:
    print("No se puede dividir por cero")
print("Programa terminado")
