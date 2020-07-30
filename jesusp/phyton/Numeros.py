print("¿Cuántos números va introducir?")
num = int(input())
if(num > 0):
    print("Introduzca un número")
    num2=int(input()) 
    for num1 in range(1, num):
        print("Introduzca un numero: ")
        num3 = int(input())
        if(num3 < num2):
            print("Es menor")
        else:
            print("Es mayor")
else:
    print("Distinto de cero o positivo")
