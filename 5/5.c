#include <stdlib.h>
#include <stdio.h>

int *analisaLista(int *arr, int *tam);

int main()
{
    int lista[] = {1, -4, 3, 6, -9, 8};
    int tam = 6;
    int *pTam = &tam;

    int *listaResposta = analisaLista(lista, pTam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d", listaResposta[i]);
    }

    free(listaResposta);
    return 0;
}

int *analisaLista(int *lista, int *tam)
{
    int novoTam=0;

    for(int i=0;i<*tam;i++){
        if(lista[i]>=0){
            novoTam++;
        }
    }

    int *novaLista = malloc(novoTam * sizeof(int));
    int j = 0;
    for (int i = 0; i < *tam; i++)
    {
        if (lista[i] >= 0)
        {
            novaLista[j] = lista[i];
            j++;
        }
    }
    *tam=j;
    return novaLista;
}
