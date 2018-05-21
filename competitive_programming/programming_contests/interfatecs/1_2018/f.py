codigo_set = set()
codido_set_saiu = set()

s = input()
codigos = input().split(' ')

for codigo in codigos:
	codigo_set.add(codigo)
	
i = input()
saidas = input().split(' ')

A = 0
I = 0
R = 0

for saida in saidas:
	if saida in codigo_set:
		if saida in codido_set_saiu:
			R += 1
		else:
			A += 1
			codido_set_saiu.add(saida)
	else:
		if saida in codido_set_saiu:
			R += 1
		else:
			I += 1
			codido_set_saiu.add(saida)

print('%d A' % A)
print('%d I' % I)
print('%d R' % R)
