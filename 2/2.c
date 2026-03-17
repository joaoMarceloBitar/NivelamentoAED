#include <stdio.h>
#include <stdlib.h>

char *vogaisAst(char *palavra);

int main()
{
    char palavra[100];
    printf("digite a palavra: ");
    scanf("%s", palavra);
    printf("%s \n", palavra);

    char *novaPalavra = vogaisAst(palavra);
    printf("%s", novaPalavra);
}

char *vogaisAst(char *palavra)
{
    if (palavra[0] == '\0')
    {
        printf("palavra vazia");
        return palavra;
    }

    char *palavraNova = malloc(100 * sizeof(char));

    int i = 0;
    while (palavra[i] != '\0')
    {
        if (
            palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            palavraNova[i] = '*';
        }
        else
        {
            palavraNova[i] = palavra[i];
        }
        i++;
    }
    palavraNova[i] = '\0';
    return palavraNova;
}