# 1-Escriba un programa que pida dos números y que escriba su media aritmética.

#-------------------------------------------------------------------------


print("CÁLCULO DE LA MEDIA DE DOS NÚMEROS")
    
print("ESCRIBA EL PRIMER NUMERO: ")
numero1=input()

print("ESCRIBA EL SEGUNDO NUMERO: ")
numero2=input()

media = (int(numero1) + int(numero2))/2

print(media)



#---------------------------------------------------------------------------------------------------------------------------------------------
# 2-Escriba un programa que pida el peso (en kilogramos) y la altura (en metros)
# de una persona y que calcule su índice de masa corporal (imc).
# El imc se calcula con la fórmula imc = peso / altura *2

#---------------------------------------------------------------------------------------------------------------------------------------------

print("CÁLCULO DEL IMC")

print("ESCRIBA EL PESO EM KG: ")

peso=input()

print("ESCRIBA LA ALTURA EM METROS: ")

altura=input()

imc= float(peso)/(float(altura)*2)

print(imc)

#--------------------------------------------------------------------------------------------------------------------------------------------
# 3-Escriba un programa que pida una distancia en pies y pulgadas y que escriba esa distancia en centímetros.
# Un pie son doce pulgadas y una pulgada son 2,54 cm.
#---------------------------------------------------------------------------------------------------------------------------------------------

print("CONVERSOR DE PIES Y PULGADAS A CENTIMETROS")

print("ESCRIBA UNA CANTIDAD EN PIES: ")

pies=input()

print("ESCRIBA UNA CANTIDAD EN PULGADAS: ")
pulgadas=input()

cm= (float(pies)*12 + float(pulgadas)) * 2.54

print(cm)

#--------------------------------------------------------------------------------------------------------------------------------------------
# 4-Escriba un programa que pida una temperatura en grados Celsius y que escriba esa temperatura en grados Fahrenheit. La relación entre grados Celsius
# (C) y grados Fahrenheit (F) es la siguiente: F = 1,8 * C + 32
#--------------------------------------------------------------------------------------------------------------------------------------------

print("CONVERTIDOR DE GRADOS CELSIUS A GRADOS FAHRENHEIT")

print("ESCRIBA UNA TEMPERATURA EN GRADO CELSIUS: ")

celsius=input()

fahr = ((float (1.8) * float (celsius) + 32))

print(fahr)

#--------------------------------------------------------------------------------------------------------------------------------------------
# 5-Escriba un programa que pida una temperatura en grados Fahrenheit y que escriba esa temperatura en grados Celsius.
# La relación entre grados Celsius (C) y grados Fahrenheit (F)
# es la siguiente: C = (F - 32) / 1,8
#--------------------------------------------------------------------------------------------------------------------------------------------

print("CONVERTIDOR DE GRADOS FAHRENHEIT A GRADOS CELSIUS")

print("ESCRIBA UNA TEMPERATURA EN GRADO FAHRENHEIT : ")

fahrenheit=input()

celsius= (float (fahrenheit) - 32) / 1.8

print(celsius)

#--------------------------------------------------------------------------------------------------------------------------------------------

# 6-Escriba un programa que pida una cantidad de segundos y que escriba cuántos minutos y segundos son.

#--------------------------------------------------------------------------------------------------------------------------------------------

print("CONVERTIDOR DE SEGUNDOS A MINUTOS")

print("ESCRIBA UNA CANTIDAD EN SEGUNDOS : ")

segundo=input()

minutos= int (segundo)/60
print (int(minutos))

resto= int(segundo) %60

print (int(minutos), "minutos y", int(resto),"segundos")

#--------------------------------------------------------------------------------------------------------------------------------------------
# 7-Escriba un programa que pida una cantidad de segundos y que escriba cuántas horas, minutos y segundos son.
#--------------------------------------------------------------------------------------------------------------------------------------------

print("CONVERTIDOR DE SEGUNDOS A HORAS Y MINUTOS")

print("ESCRIBA UNA CANTIDAD EN SEGUNDOS : ")

segundo=input()

horas= int (segundo)/3600

resto1=int (segundo)%3600

minutos= int(resto1)/60

segundos= int(resto1)%60

print (int(horas), "horas y", int(minutos),"minutos",int(segundos),"segundos")






































