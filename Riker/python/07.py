# 7-Escriba un programa que pida una cantidad de segundos y que escriba cuántas horas, minutos y segundos son.

seconds = int(input("Seconds: "))

h = int(seconds/3600)
m = int(int(seconds - h*3600) / 60)
s = int(seconds - h*3600 - m*60)

print("Horas: ", h, " Minutes: ", m, " Seconds: ", s)
