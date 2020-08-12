print("calcular area de [T]riangulo, o [C]irculo?")
op = input()

if (op == 'T') or (op == 't'):
	print("base:")
	base = float(input())
	print("altura:")
	altura = float(input())
	
	print("area:", ( (base * altura) / 2) )
elif (op == 'C') or (op == 'c'):
	pi = 3.141592
	
	print("radio:")
	radio = float(input())
	
	print("area:", ( (pi * radio) ** 2 ) )
else:
	print("opcion invalida")