# 6-Escriba un programa que pida dos números enteros y que escriba si el mayor es múltiplo del menor.

n1 = int(input("n1 ?"))
n2 = int(input("n2 ? "))

if (n1 == n2):
    print("Numbers are equal")
else:
    if (n1 > n2):
        max = n1
        min = n2
    else:
        max = n2
        min = n1

    if(max%min == 0):
        print(max, " is multiple of ", min)
    else:
        print(max, " isn't multiple of ", min)
