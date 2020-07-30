print("Introduzca un número")
num = int(input())
if(num > 0):
    for num1 in range(1, num+1):
        if(num % num1 == 0):
            print("Divisible por: ", num1)
else:
    print("Distinto de cero o positivo")
