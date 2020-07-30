#1

words = []
n = int(input("palabras a incluir"))

for i in range(n):
	print("palabra ", i, ": ")
	word = input()
	words += [word]

print(words)


#2


words = []
n = int(input("palabras a incluir:"))

for i in range(n):
	print("palabra ", i, ": ")
	word = input()
	words += [word]

print(words)
q = input("palabra a contar:")
print(q, "aparece ", words.count(q), "veces")


#3


words = []
n = int(input("palabras a incluir:"))

for i in range(n):
	print("palabra ", i, ": ")
	word = input()
	words += [word]

print(words)
q = input("palabra a reemplazar:")
r = input("palabra de reemplazo:")
while not(q in words):
	words[words.index(q)] = r


#4


n1 = int(input("numero de nombres en lista 1:"))
names1 = []
for i in range(n1):
	names1 += input("nombre:")
print("lista 1: ", names1)

n2 = int(input("numero de nombres en lista 2:"))
names2 = []
for i in range(n2):
	names2 += input("nombre:")
print("lista 2:", names2)

print("eliminando elementos en lista 2 de lista 1")
for i in names1:
	for j in names2:
		names1.remove(names2)
print("lista 1:", names1)


#5


l = list(range(132, 139, 2))


#6


n1 = int(input("numero de nombres en lista 1:"))
names1 = []
names2 = []
for i in range(n1):
	names1 += input("nombre:")
for i in range(n1, 0, -1):
	names2 += [names1[i]]
print("lista 1:", names1)
print("lista 2:", names2)


#7


n1 = int(input("numero de nombres en lista 1:"))
names1 = []
for i in range(n1):
	names1 += input("nombre:")
print("lista 1: ", names1)

n2 = int(input("numero de nombres en lista 2:"))
names2 = []
for i in range(n2):
	names2 += input("nombre:")
print("lista 2:", names2)

res1 = []
res2 = []
res3 = []
for i in names1:
	if i in names2:
		res3 += i
	else:
		res1 += i
for i in names2:
	if not(i in names1):
		res2 += i

print("res1:", res1)
print("res2:", res2)
print("res3:", res3)


#8


x = int(input("numero hasta donde buscar primos:"))
p = []

for i in range(x + 1, 1, -1):
	if (i % 2) and (i % 3) and (i % 5) and (i % 7):
		p += [i]
print(p)


#9


w = input("palabra a evaluar:")
l = [['a', 0], ['e', 0], ['i', 0], ['o', 0], ['u', 0]]

for i in word:
	for j in len(l):
		if i == [j][0]:
			l[j][1] += 1
print(l)