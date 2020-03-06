# 4-Escriba un programa que pida el año actual y un año cualquiera y que escriba cuántos años han pasado desde ese año o cuántos años faltan para llegar a ese año.

import datetime

year = int(input("Year? "))

current_year = datetime.datetime.now().year

if (year < current_year):
    print("Years since ", year, ", ", current_year - year)
else:
    if(year > current_year):
        print("Years to ", year,", ", year - current_year)
    else:
        print("Same year.")
