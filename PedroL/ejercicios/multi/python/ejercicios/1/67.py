print("segundos: ")
segu = float(input())
minu = 0

print("minutos: ", int(segu / 60), "| segundos: ", int(segu % 60))

while segu >= 60:
	minu += 1
	segu-= 60

print("minutos: ", int(minu), "| segundos: ", int(segu))

print("de vuelta a segundos:", int(segu + (minu * 60)))