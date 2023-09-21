linha = input()

linha = linha.replace('PQ', '').replace(' ', '')

linha_final = ''
especiais = '?.,!'


for i in range(len(linha)):
	if linha[i] == 'R':
		if linha[i + 1] in especiais:
			pass
		else:
			linha_final += ' '
	else:
		linha_final += linha[i]
		

print(linha_final)