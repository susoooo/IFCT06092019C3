w = input("palabra a evaluar:")
l = [['a', 0], ['e', 0], ['i', 0], ['o', 0], ['u', 0]]

for i in w:
	for j in range(len(l)):
		
		s = '<' if i == l[j][0] else ''
		print(j, ' ', i, l[j][0], s)
		
		if i == l[j][0]:
			l[j][1] += 1

print(l)<