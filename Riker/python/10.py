# 3-Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el mayor o que escriba que son iguales.

n1 = int(input("n1? "));
n2 = int(input("n2? "));

if(n1 > n2):
    print(n1, ">", n2)
else:
    if (n2 > n1):
        print(n2, ">", n1)
    else:
        print(n2, "=", n1)
