#6-Escriba un programa que pida una cantidad de segundos
#y que escriba cuántos minutos y segundos son.

print("Escribe unos segundos: ")
segundos= input()

minutos= int(segundos)/60


seg = int(segundos) % 60
print (int(minutos), "minutos y", int(seg), "segundos")


#7-Escriba un programa que pida una cantidad de segundos y
#que escriba cuántas horas, minutos y segundos son.

print("Escribe unos segundos: ")
segundos= input()

horas= int(segundos) /3600

minutos= int(segundos)/60

seg = int(segundos) % 60
print (int (horas),"horas,",int(minutos), "minutos y", int(seg), "segundos")

