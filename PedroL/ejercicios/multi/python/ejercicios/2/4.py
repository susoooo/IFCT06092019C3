print("año actual:")
x = int(input())

print("año diferente:")
y = int(input())

if x > y:
	print("han pasado", (x - y), "años desde", y)
elif x < y:
	print("faltan", (y - x), "años hasta", y)
else:
	print("mismo año")