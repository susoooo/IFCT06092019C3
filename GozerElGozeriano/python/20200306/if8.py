#8-Escriba un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos.

iguales=0
print("Nº 1:")
n1=int(input())
print("Nº 2:")
n2=int(input())
print("Nº 3:")
n3=int(input())
if(n1==n2):
	iguales+=1
if(n1==n3):
	iguales+=1
if(n2==n3):
	iguales+=1	
print("Número de iguales: ",iguales)
			
