# Escriba un programa que pida un año y que 
# escriba si es bisiesto o no. Se recuerda 
# que los años bisiestos son múltiplos de 4,
# pero los múltiplos de 100 no lo son, aunque 
# los múltiplos de 400 sí.
ano=int(input("Introduzca un año: "))
if ano % 4 == 0:
    if ano % 100 == 0:
        if ano % 400 == 0:
            print('El año es bisiesto')
        else:
            print('El año no es bisiesto')
    else:
        print('El año es bisiesto.')
else:
    print('El año no es bisiesto.')