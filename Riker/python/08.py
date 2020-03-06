# 1-Escriba un programa que pida dos números enteros y que calcule su división, escribiendo si la división es exacta o no.

n1 = int(input("n1? "))
n2 = int(input("n2? "))

if (n1%n2 == 0):
    print("yes")
else:
    print("no")
