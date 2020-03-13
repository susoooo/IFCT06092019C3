#1-Escriba un programa que pida dos números enteros. El programa pedirá de nuevo el segundo número mientras no sea mayor que el primero. El programa terminará escribiendo los dos números.

print("Primer número entero:")
n1=int(input())
n2=n1
while n2<=n1:
	print("Segundo número entero:")
	n2=int(input())

print(n1, " ", n2)
