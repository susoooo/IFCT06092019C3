print ("Introducir 2 numeros: ")
print ("Primer numero: ")
numero1 = input()
print ("Segundo numero: ")
numero2 = input()

if (numero1 > numero2):
    print ("Los numero pares desde ", numero1, " hasta ", numero2, " son: ")
    for num in range(int (numero1), int (numero2)):
        if not (num % 2):
            print (num, ", ")
else:
    print ("Los numero pares desde ", numero2, " hasta ", numero1, " son: ")
    for num in range(int(numero2), int(numero1)):
        if not (num % 2):
            print (num, ", ")

if (numero1 > numero2):
    print ("Los numero impares desde ", numero1, " hasta ", numero2, " son: ")
    for num in range(int (numero1), int (numero2)):
        if (num % 2):
            print (num, ", ")
else:
    print ("Los numero impares desde ", numero2, " hasta ", numero1, " son: ")
    for num in range(int(numero2), int(numero1)):
        if (num % 2):
            print (num, ", ")

# --------------------------------------------------------

print ("Introducir 1 numero entero mayor que 0: ")
print ("Numero: ")
numero = input()

for num in range(1, int(numero)-1):
    if not (int(numero) % num):
        print ("Los numero ", numero1, " es multiplo de ", num)
     
# --------------------------------------------------------

print ("Introducir cuantos numeros va a introducir: ")
print ("Numeros: ")
numeros = input()

print ("Primer numero: ")
numero1 = input()

for num in range(0, int(numeros)):
    print ("Siguiente numero: ")
    numero2 = input()
    
    if not (int(numero2) > int(numero1)):
        print ("El numero ", numero2, " no es mayor que ", numero1)


# --------------------------------------------------------

print ("Introducir cuantos numeros va a introducir: ")
print ("Numeros: ")
numeros = input()

negativos = 0

for num in range(0, int(numeros)):
    print ("Introduzca numero: ")
    numero2 = input()
    
    if (int(numero2) < 0):
        negativos = int(negativos) + 1

print ("Se han introducido ", negativos, " numeros negativos")

# --------------------------------------------------------

print ("Introducir cuantos numeros va a introducir: ")
print ("Numeros: ")
numeros = input()

pares = 0
impares = 0

for num in range(0, int(numeros)):
    print ("Introduzca numero: ")
    numero2 = input()
    
    if (int(numero2) % 2):
        impares = int(impares) + 1
    else:
        pares = int(pares)+1

print ("Se han introducido ", pares, " numeros pares")
print ("Se han introducido ", impares, " numeros impares")

