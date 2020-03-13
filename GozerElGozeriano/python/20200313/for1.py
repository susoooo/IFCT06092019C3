#1-Escriba un programa que pida dos números enteros y escriba qué números son pares y cuáles impares desde el primero hasta el segundo

print("Escribe primer número:")
n1=int(input())
print("Escribe segundo número:")
n2=int(input())

print("Pares: ")
for n in range(n1,n2):
	if(n%2==0):
		print(n)

print("Inpares: ")
for n in range(n1,n2):
	if(not n%2==0):
		print(n)
