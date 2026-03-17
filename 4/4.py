def addFila(nome,nomes):
    nomes.append(nome)
    print(nomes)

def remFila(nomes):
    nomes.pop(0)
    print(nomes)

nomes = []

addFila("joao",nomes)
addFila("marcelo",nomes)
remFila(nomes)
addFila("Bitar",nomes)

