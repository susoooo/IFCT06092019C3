#8-Cree un programa que pida un número y a continuació genere una lista con todos los números primos desde él hasta el 0.


primos = [1]
print("Número:")
num=int(input())
m=2
check = False
for n in range(2,num):
	while m<n/2+1 and not check:
		if(n%m==0):
			check=True
		m+=1
	if(not check):
		primos+=[n]
	m=2
	check=False
primos.reverse()
print(primos)
