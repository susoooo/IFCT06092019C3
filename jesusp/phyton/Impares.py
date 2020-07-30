print("¿Cuántos números va introducir?")
num = int(input())
num2 = 0
num4 = 0
if(num > 0):    
    for num1 in range(1, num+1):
        print("Introduzca un numero: ")
        num3 = int(input())
        if(num3 % 2):
            num2 = num2+1
        else:
            num4 = num4+1
        
else:
    print("Distinto de cero o positivo")

print("Ha escrito ", num4, " pares")
print("Ha escrito ", num2, " impares")
