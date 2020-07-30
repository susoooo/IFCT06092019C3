# 9- Escriba un programa que pida un año y que escriba si es bisiesto o no. Se recuerda que los años bisiestos son múltiplos de 4, pero los múltiplos de 100 no lo son, aunque los múltiplos de 400 sí.

year = int(input("Year: "))

if((year%4 == 0)):
   if ((year%400==0)):
       print(year, " is a leap year")
   else:
       if ((year%100==0)):
           print(year, " isn't a leap year")
       else:
           print(year, " is a leap year")
else:
    print(year, " isn't a leap year")
