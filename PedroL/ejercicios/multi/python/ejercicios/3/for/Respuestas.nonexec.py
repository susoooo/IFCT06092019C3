#1

print("numero entero:")
x = int(input())
print("numero entero:")
y = int(input())
z = bool(x % 2)

for i in range(x, y):
    z = not(z)
    res = str(i) + ": par" if z else str(i) + ": inpar"
    print(res)
    

#2

a = True
while a:
    print("numero entero mayor que cero:")
    x = int(input())
    if x <= 0:
        print("numero debe ser mayor que cero")
    else:
        a = False

print("divisores:")
for i in range(1, x + 1):
    if not(x % i):
        print(i)
        
#3

x = int(input("numeros a introducir:"))
y = []

for i in range(x):
    print("numero ", i, ":")
    z = int(input())
    y += [z]
    if z < y[0]:
        print("numero no mayor al primero")


#4

x = int(input("numeros a introducir:"))
y = []

for i in range(x):
    print("numero ", i, ":")
    z = int(input())
    y += [z]

pos = 0
neg = 0
for i in y:
    if i > 0:
        pos += 1
    else:
        neg += 1

print(pos, " positivos")
print(neg, " negativos")


#5

x = int(input("numeros a introducir:"))
y = []

for i in range(x):
    print("numero ", i, ":")
    z = int(input())
    y += [z]

pares = 0
impares = 0
for i in y:
    if i % 2:
        impares += 1
    else:
        pares += 1

print(pares, " pares")
print(impares, " impares")


#6

x = int(input("numeros a introducir:"))
y = []

for i in range(x):
    print("numero ", i, ":")
    z = int(input())
    y += [z]

print("suma: ", sum(y))