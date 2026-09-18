


def converterMonthExtensive(data):
  month = "Janeiro Fevereiro Março Abril Maio Junho Julho Agosto Setembro Outubro Novembro Dezembro".split()
  d,m,a = data.split('/')
  monthExtensive = month[int(m)-1] 
  return f'{d} de {monthExtensive} de {a}'


a = input("insira a data\n")
print(converterMonthExtensive(a))

print(converterMonthExtensive('10/04/2021'))
