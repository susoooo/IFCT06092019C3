#3-Escriba un programa que pregunte cuántos números se van a introducir,
# pida esos números, y muestre un mensaje cada vez que un número no sea mayor que el primero

print("MAYORES QUE EL PRIMERO")
  
print("¿Cuántos valores va a introducir?")
valores= int(input())

print("¿Escriba un número?")
primero= int(input())

for i in range(valores - 1):
    print(f"Escriba un número más grande que {primero}: ")
    numero= int(input())
    if primero <= numero:
        print(f"¡{numero} es mayor que {primero}!")
    else:
        print("¡Imposible!")
        

#https://www.mclibre.org/consultar/python/ejercicios/ej-for-1-soluciones.html
