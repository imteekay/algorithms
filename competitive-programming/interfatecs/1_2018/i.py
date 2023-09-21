boletos = []

try:
	while True:
		boletos.append(input())
except EOFError:
	pass
	
def data(data_string):
	ano = data_string[4:6]
	mes = data_string[2:4]
	dia =  data_string[0:2]
	
	return int(''.join([ano, mes, dia]))
	
def analisar_boleto(boleto):
	vencimento = boleto[4:10]
	pagamento = boleto[22:28]
	valor_inteiro = boleto[10:16]
	valor_decimal = boleto[16:18]
	
	valor = int(valor_inteiro) + int(valor_decimal) / 100
	
	if data(pagamento) > data(vencimento):
		return 0, valor
	else:
		return valor, 0
	
total_ad = 0
total_id = 0

for boleto in boletos:
	ad, id = analisar_boleto(boleto)
	total_ad += ad
	total_id += id
	
print('%.2f-ADIMPLENTE' % total_ad)
print('%.2f-INADIMPLENTE' % total_id)