#1

x = int(input("numero entero menor:"))
while True:
    y = int(input("numero entero mayor:"))
    if y > x:
        print("segundo numero no es mayor al primero")
    else:
        break

print(x, ',', y)


#2

x = float(input("primer numero decimal:"))

while True:
	y = float(input("numero a evaluar:"))
	if y >= x:
		print("numero mayor al primero, continuando")
	else:
		print("numero menor al primero, terminando")
		break


#3

x = int(input("numeros positivos a imprimir"))

while x:
	y = int(input("numero a evaluar:"))
	x = x - 1 if y > 0 else x
	
	if not(x == 1):
		print("quedan ", x, " numeros")
	else:
		print("queda 1 numero")
		
		
#4

x = int(input("minimo:"))
while True:
	y = int(input("maximo:"))
	if y > x:
		break

i = 0
while True:
	z = int(input("numero a evaluar:"))
	if (z < x) && (z > y):
		i += 1
	else:
		break

print("numeros escritos:", i)


#5

x = []
while True:
	q = input("quiere seguir introduciendo numeros? [s/S]")
	if (q == 's') || (q == 'S'):
		break
	
	while True:
		y = float(input("numero par:"))
		if not(x % 2):
			break
		else:
			x += [y]
print(x)