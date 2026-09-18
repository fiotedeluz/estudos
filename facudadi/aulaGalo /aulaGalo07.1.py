



a = int(input('digite um numero'));
b = int(input('digite outro numero'));
c = a + b

if c >= 0:
	print("a soma é igual a ", c)
else
	print('tente um numero maior')


buyType = int(input('insira o codigo da compra: '))

if buyType == 2:
	print('compra a vista')
elif buyType == 3:
	print('compra a prazo no boleto')
elif buyType == 4:
	print('compra a prazo no cartão')
else:
	print('tipo de compra não cadastrado')
