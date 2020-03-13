# Escriba un programa que pida números pares 
# mientras el usuario indique que quiere seguir 
# introduciendo números. Para indicar que quiere 
# seguir escribiendo números, el usuario deberá 
# contestar S o s a la pregunta.
numero=int(input("Introduzca un numero: "))
lista=[]
if numero%2==0:
    lista=lista+[numero]
cadena=input("¿Quiere seguir introduciendo numeros?: ")
while cadena=='S' or cadena=='s':
    numero=int(input("Introduzca un numero: "))
    if numero%2==0:
        lista=lista+[numero]
    cadena=input("¿Quiere seguir introduciendo numeros?: ")
print(list(lista))
