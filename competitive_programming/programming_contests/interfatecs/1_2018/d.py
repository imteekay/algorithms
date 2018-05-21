palavra = input()
direcoes = input().split(' ')
l, c = list(map(int, input().split(' ')))
mat = []

locais_da_primeira_letra = []

for i in range(l):
	
	linha = []
	
	for j, letra in enumerate(input()):
		linha.append(letra)
		
		if letra == palavra[0]:
			locais_da_primeira_letra.append((i, j))
	
	mat.append(linha)
	
def direction(letter):
	if letter == 'd':
		return (0, 1)
	elif letter == 'c':
		return (-1, 0)
	elif letter == 'b':
		return (1, 0)
	else:
		return (0, -1)
	
def letra_correta(i, j, pc):
	return 0 <= i < l and 0 <= j < c and mat[i][j] == pc
	
	
def procura(visitados, i, j, palavra, sequencia):
	if palavra == '':
		return sequencia
			
	result = None
	
	if (i, j) not in visitados and letra_correta(i, j, palavra[0]):		
		for direcao in direcoes:
			di, dj = direction(direcao)		

			result = procura(visitados + [(i, j)], i + di, j + dj, palavra[1:], sequencia + [(i + 1, j + 1)])
		
			if result != None:
				break
		
	return result
	
	
result = None

for i, j in locais_da_primeira_letra:
	result = procura([], i, j, palavra, [])
	
	if result != None:
		break
	
if result != None:
	print(','.join(list(map(str, result))).replace(' ','') + '.')
else:
	print('impossivel!')

