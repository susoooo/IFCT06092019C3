#4-Escriba un programa que pida una temperatura en grados Celsius y
# que escriba esa temperatura en grados Fahrenheit.
# La relación entre grados Celsius (C) y grados Fahrenheit (F) es la siguiente:
 #   F = 1,8 * C + 32


print("Escribe una temperatura en grados Celsius: ")
celsius= input()

fahrenheit= 1.8* float(celsius) + 32
print (fahrenheit)


#5-Escriba un programa que pida una temperatura en grados Fahrenheit
#y que escriba esa temperatura en grados Celsius.
#La relación entre grados Celsius (C) y grados Fahrenheit (F) es la siguiente:
#    C = (F - 32) / 1,8

print("Escribe una temperatura en grados Fahrenheit: ")
fahrenheit= input()

celsius= (float(fahrenheit)-32) /1.8
print (celsius)
