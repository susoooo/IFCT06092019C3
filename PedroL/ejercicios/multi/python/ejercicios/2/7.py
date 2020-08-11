print("x:")
x = int(input())

print("y:")
y = int(input())

if not(x > 0) or not(y > 0):
	print("solo numeros mayores de 0")
else:
	may = (x > y) ? x : y
	men = (x > y) ? y : x

	if may % men:
		print("mayor no multiplo del menor")
	else:
		print("mayor es multiplo del menor")