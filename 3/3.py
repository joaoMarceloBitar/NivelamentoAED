def invertePal(palavra):
    tamPal = len(palavra) - 1
    palavraInv = ""
    
    while tamPal >= 0:
        palavraInv += palavra[tamPal]
        tamPal -= 1

    return palavraInv


palavra = input("digite uma palavra: ")
palavraInv = invertePal(palavra)

print(palavraInv)