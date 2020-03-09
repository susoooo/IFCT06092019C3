#7-Escriba un programa que pida una cantidad de segundos y que escriba cuántas horas, minutos y segundos son.

print("Segundos:")
sgd=int(input())
min=0
horas=0

while sgd>3600:
	horas+=1
	sgd-=3600
while sgd>60:
	min+=1
	sgd-=60
	
print("Horas: ", horas, "Minutos: ", min, " Segundos: ",sgd)
