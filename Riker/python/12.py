# 5-Mejore el programa anterior haciendo que cuando la diferencia sea exactamente un año, escriba la frase en singular

import datetime

y = int(input("Year? "))

current_year = datetime.datetime.now().year

if (abs(y - current_year) == 1):
    year = "Year "
else:
    year = "Years "

if (y < current_year):
    print(year, "since ", y, ", ", current_year - y)
else:
    if(y > current_year):
        print(year, "to ", y,", ", y - current_year)
    else:
        print("Same year.")
