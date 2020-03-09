# Mejore el programa anterior haciendo que tenga en cuenta que no se puede dividir por cero

numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
if numero2 :
    division=numero1/numero2
    print("Divsion: ",division)
    if bool(numero1%numero2) :
        print("La division no es exacta")
    else :
        print("La division es exacta")
else: 
    print("No se puede dividir por 0")