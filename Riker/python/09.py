# 2-Mejore el programa anterior haciendo que tenga en cuenta que no se puede dividir por cero

n1 = int(input("n1? "))
n2 = int(input("n2? "))

if (n2 != 0):
    if (n1%n2 == 0):
        print("yes")
    else:
        print("no")
else:
    print("I can't divive by 0")
