# Mejore el programa anterior haciendo que el programa avise cuando se escriben valores negativos o nulos.
numero1=int(input("Introduzca el primer numero: "))
numero2=int(input("Introduzca el segundo numero: "))
if numero1<=0 or numero2<=0 :
    print("Hay numeros negativos o nulos")
else:
    if numero1>=numero2 :
        mayor=numero1
        menor=numero2
    else :
        mayor=numero2
        menor=numero1
    if mayor%menor :
        print(mayor,"no es multiplo de",menor)
    else :
        print(mayor,"es multiplo de",menor)