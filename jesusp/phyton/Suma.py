print("¿Cuántos números va introducir?")
num = int(input())
suma = 0
if(num > 0):    
    for num1 in range(1, num+1):
        print("Introduzca un numero: ")
        num3 = int(input())
        suma = num3 +suma
        
else:
    print("Distinto de cero o positivo")

print("La suma es: ", suma)
