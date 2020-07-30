#5-Escriba un programa que pida números pares mientras el usuario indique que quiere seguir introduciendo números. Para indicar que quiere seguir escribiendo números, el usuario deberá contestar S o N a la pregunta.


answer = "S"

while answer=="S":
	print("Número par:")
	input()
	print("Instroducir más? (S/N):")
	answer=input()
