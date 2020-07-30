# Escriba un programa que pida el año actual 
# y un año cualquiera y que escriba cuántos 
# años han pasado desde ese año o cuántos 
# años faltan para llegar a ese año

actual=int(input("Introduzca el año actual: "))
cualquiera=int(input("Introduzca un año cualquiera: "))
if actual >= cualquiera:
    distancia=actual-cualquiera
    print("Han pasado: ",distancia," años")
else :
    distancia=cualquiera-actual
    print("Faltan: ",distancia," años")