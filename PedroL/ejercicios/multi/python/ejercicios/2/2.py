print("y:")
x = int(input())

print("y:")
y = int(input())

if y:
	print(x / y)

	if (x % y):
		print("division inexacta")
	else:
		print("division exacta")
else:
	print("division entre cero")