print("x:")
x = int(input())

print("y:")
y = int(input())

may = (x > y) ? x : y
men = (x > y) ? y : x

if may % men:
	print("mayor no multiplo del menor")
else:
	print("mayor es multiplo del menor")