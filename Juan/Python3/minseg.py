
print("CONVERTIDOR DE SEGUNDOS A MINUTOS")
segundos = int(input("Escriba una cantidad de segundos: "))

minutos = segundos // 60
resto = segundos % 60

print(f"{segundos} segundos son {minutos} minutos y {resto} segundos")
print(segundos , " segundos son ", minutos, "minutos y " ,resto," segundos")

print("CONVERTIDOR DE SEGUNDOS A HORAS Y MINUTOS")
segundos = int(input("Escriba una cantidad de segundos: "))

horas = segundos // 3600
resto_1 = segundos % 3600
minutos = resto_1 // 60
resto = resto_1 % 60

print(
        f"{segundos} segundos son {horas} horas, {minutos} minutos y {resto} segundos"
    )

