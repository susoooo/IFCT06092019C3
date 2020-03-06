# Mejore el programa anterior haciendo que cuando la diferencia sea exactamente un año, escriba la frase en singular
actual=int(input("Introduzca el año actual: "))
cualquiera=int(input("Introduzca un año cualquiera: "))
if actual >= cualquiera:
    distancia=actual-cualquiera
    cadena="Han pasado: "
else :
    distancia=cualquiera-actual
    cadena="Faltan: "
if distancia==1 :
    anos="año"
else :
    anos="años"
print(cadena,distancia,anos)