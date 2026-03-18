

##simples check de idade para a aula

print ("sera que vc precisa votar?")
n = int(input("digite a sua idade: "))

if n < 16:
  print ("você não é apto a votar")
elif 15 < n < 18:
  print ("você pode votar mas não precisa")
elif 18 <= n < 70:
  print ("você tem q votar")
else:
  print ("voce não tem mais q votar")
