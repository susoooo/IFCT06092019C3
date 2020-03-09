
print ("Numero 1: ")
num1 = input()

print ("Numero 2: ")
num2 = input()

resto = (int (num1) % int (num2))

if (resto):
    print ("La division NO es exacta")
else:
    print ("La division es exacta")

#---------------------------------------------------

print ("Numero 1: ")
num1 = input()

num2 = 0

while (not int(num2)):
    print ("Numero 2: ")
    num2 = input()
    
    if (int(num2)):
        resto = (int (num1) % int (num2))
        if (resto):
            print ("La division NO es exacta")
        else:
            print ("La division es exacta")
    else:
        print ("No se puede dividir por 0")

#---------------------------------------------------

print ("Numero 1: ")
num1 = input()

print ("Numero 2: ")
num2 = input()

if (int (num1) == int (num2)):
    print ("Los numeros son iguales")
else:
    if (int (num1) > int (num2)):
        print (num1,"Es mayor que ", num2)
    else:
        print (num1,"Es mayor que ", num1)

#---------------------------------------------------

print ("Primer año (menor que el actual): ")
anio1 = input()

print ("Segundo año (mayor que el actual): ")
anio2 = input()

actual = 2020

if ((int (actual) - int (anio1)) > 1):
    print ("Han pasado ", int(actual) - int(anio1), " años desde ", anio1)
else:
    print ("Ha pasado ", int(actual) - int(anio1), " año desde ", anio1)
    
if ((int (anio2) - int (actual)) > 1):
    print ("Faltan ", int (anio2) - int (actual), "años para llegar a ", anio2)
else:
    print ("Falta ", int (anio2) - int (actual), "año para llegar a ", anio2)

#---------------------------------------------------

print ("Numero 1: ")
num1 = input()

print ("Numero 2: ")
num2 = input()

if (int (num1) > int (num2)):
    if ((int (num1) / int (num2))):
        print (num1, "Es multiplo de ", num2)
    else:
        print (num1, "No es multiplo de ", num2)
else:
    if ((int (num2) / int (num1)) == 0):
        print (num2, "Es multiplo de ", num1)
    else:
        print (num2, "No es multiplo de ", num1)
        
#---------------------------------------------------




#---------------------------------------------------

