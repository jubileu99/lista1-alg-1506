#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 7

int main()
{

    int vetor[tam] = {1, 3, 4, 6, 8, 9, 11},
        aux,
        x;

    printf("Informe o valor a ser buscado\n");
    scanf("%i", &x);

    if (vetor[(tam - 1) / 2] == x)
    {
        printf("Elemento %i achado no vetor\n", x);
    }
    else if (x > vetor[(tam - 1) / 2])
    {
        if (x == vetor[tam - 2])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else if (x == vetor[tam - 1])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else if (x == vetor[tam - 3])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else
        {
            printf("Elemento %i nao encontrado no vetor\n", x);
        }
    }
    else if (x < vetor[(tam - 1) / 2])
    {
        if (x == vetor[1])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else if (x == vetor[2])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else if (x == vetor[0])
        {
            printf("Elemento %i achado no vetor\n", x);
        }
        else
        {
            printf("Elemento %i nao encontrado no vetor\n", x);
        }
    }

    return 0;
}