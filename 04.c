#include <stdio.h>
#include <stdlib.h>

#define tam 20

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

int main(){

    int n[tam],
    aux;


    for(int i = 0 ; i < tam ; i++){
        scanf("%i",&n[i]);
    }

    for (int i = 0; i < tam/2; i++){
        aux = n[i]; // var para guardar o valor incial da posi. 0
        n[i] = n[tam-1-i]; // -1 do vetor pq inicia em 0. e vai até o indice 19
        n[tam-1-i] = aux;  // pega o valor de aux e joga na posi. do vetor que foi pego anteriormente.
    }

    for (int i = 0; i < tam; i++){
        printf("[%i] = %i\n",i,n[i]);
    }

    return 0;
}