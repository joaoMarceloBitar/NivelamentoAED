def remIguais(lista):
    return list(set(lista))
    
lista = [1, 7, 8, 4, 3, 3, 4, 8, 7]
print(lista)
resultado = remIguais(lista)
print(resultado)