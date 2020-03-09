# 6-Escriba un programa que pida una cantidad de segundos y que escriba cuántos minutos y segundos son.

s = int(input("Seconds? "))

print("Minutes: ", int(s/60), " .Seconds: ", s - (int(s/60)*60))
