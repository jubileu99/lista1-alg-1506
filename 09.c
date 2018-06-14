#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 10

int main(){

    int vetor[tam] = {6,4,8,0,4,0,5,6,9,4},
    aux,
    cont=0;

    for(int i = 0; i < tam ; i++){
        if (vetor[i] == 0)
        {
            cont++;
            
        }
    }

    for(int i = 0 ; i < tam-1 ; i++){
        if(vetor[i] == 0){
            aux = vetor[i+1];
            vetor[i+1] = 0;
            vetor[i] = aux;
        }
    }

    for(int i = 0; i < tam ; i++){
        printf("%i\n",vetor[i]);
    }

    return 0;
}