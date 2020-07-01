print("Dame los segundos")
seg = input()
horas=int(seg)/3600
minutos=(int(seg)-int(horas)*3600)/60
segundos=(int(seg)-int(horas)*3600)%60
print("Son ",int(horas),"horas",int(minutos)," minutos y ",segundos,"segundos.")
