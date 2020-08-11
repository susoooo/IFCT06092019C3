print("año:")
x = int(input())

if ( not(x % 4) and (x % 100) ) or (x % 400):
	print("año bisiesto")