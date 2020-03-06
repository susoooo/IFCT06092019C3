#6-Escriba un programa que pida una cantidad de segundos y que escriba cuántos minutos y segundos son.

print("Segundos:")
sgd=int(input())
min=0
while sgd>60:
	min+=1
	sgd-=60
	
print("Minutos: ", min, " Segundos: ",sgd)
