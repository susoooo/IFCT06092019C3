#1-Escriba un progr2ama que pida dos números enteros
#y escriba qué números son pares y
#cuáles impares desde el primero hasta el segundo

print("PARES E IMPARES")
numero_1 = int(input("Escriba un número entero: "))
numero_2 = int(input(f"Escriba un número entero mayor o igual que {numero_1}: "))


if numero_2 < numero_1:
    print(f"¡Le he pedido un número entero mayor o igual que {numero_1}!")
else:
    for i in range(numero_1, numero_2 + 1):
        if i % 2 == 0:
            print(f"El número {i} es par.")
        else:
            print(f"El número {i} es impar.")



