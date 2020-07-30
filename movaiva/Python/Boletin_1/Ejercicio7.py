segundos=int(input("Segundos: "))
horas = segundos // 3600
minutos = segundos % 3600 // 60
resto = segundos % 60
print(segundos,"segundos son",horas,"horas,",minutos," minutos y",segundos,"segundos")