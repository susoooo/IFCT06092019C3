print("x:")
x = float(input())
print("y:")
y = float(input())
print("z:")
z = float(input())

if (x == y) and (y == z):
	print("los tres son iguales")
elif (x == y) or (y == z) or (x == z):
	print("hay dos numeros iguales")
else:
	print("los tres son distintos")