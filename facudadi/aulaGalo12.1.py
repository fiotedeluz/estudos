


def converterMaiuscula (texto, flagMaiuscula):
    if flagMaiuscula:
        return texto.upper()
    else:
        return texto.lower()
        
texto = converterMaiuscula(flagMaiuscula=True, texto ="vai estudar")

print (texto)
