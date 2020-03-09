
# 8-Escriba un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos.

n1 = int(input("n1 ? "))
n2 = int(input("n2 ? "))
n3 = int(input("n3 ? "))

if ((n1 == n2) and (n2 == n3)):
    print("They are equal.")
else:
    if ((n1 == n2) or (n1 == n3) or (n2 == n3)):
          print("There are two equal numbers")
    else: 
          print("They are all different")

