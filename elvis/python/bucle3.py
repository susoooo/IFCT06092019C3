#Escriba un programa que pregunte cuántos números se van a introducir,
#pida esos números,y muestre un mensaje cada vez que un número no
#sea mayor que el primero

print("MAYORES QUE EL PRIMERO")
valores = int(input("¿Cuántos valores va a introducir? "))

if valores < 1:
    print("¡Imposible!")

else:
    primero = int(input("Escriba un número: "))
    for i in range(valores - 1):
        numero = int(input(f"Escriba un número más grande que {primero}: "))
    if numero <= primero:
        print(f"¡{numero} no es mayor que {primero}!")
print("Gracias por su colaboración.")

      
