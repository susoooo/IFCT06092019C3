# Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.

print("DIVISORES")
numero = int(input("Escriba un número entero mayor que cero: "))

if numero <= 0:
    print("¡Le he pedido un número entero mayor que cero!")
else:
    print(f"Los divisores de {numero} son ")
    for i in range(1, numero + 1):
        if numero % i == 0:
            print(i)
