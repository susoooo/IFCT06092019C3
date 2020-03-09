#7-Escriba un programa que pida una cantidad de segundos y
#que escriba cuántas horas, minutos y segundos son.

print("Escribe unos segundos: ")
segundos= input()

horas= int(segundos)/3600

minutos = (int(segundos) - int (horas)*3600)/60

seg = int(segundos) % 60
print (int(horas),"horas,",int(minutos), "minutos y", int(seg), "segundos")



