#Escriba un programa que pida dos números enteros y escriba
#qué números son pares y cuáles impares desde el primero hasta el segundo


print("PARES E IMPARES")
numero1 = int(input("Escriba un número entero: "))
numero2 = int(input(f"Escriba un número entero mayor o igual que {numero1}: "))

if numero2 < numero1:
    print("Le he pedido un número entero mayor o igual que {numero1}!")
        
else:
    for i in range(numero1, numero2 + 1):
        if i % 2 == 0:
            print(f"El número {i} es par.")
        else:
            print(f"El número {i} es impar.")


