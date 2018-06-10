#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define t 7

int main(){

    int vetor[t] = {1,3,4,6,8,9,11},
    aux,
    x;

    printf("Informe o valor a ser buscado\n");
    scanf("%i",&x);

    
    if( vetor[(t-1)/2] == x ){
        printf("Elemento %i achado no vetor\n",x);
    }else if(x > vetor[(t-1)/2] ){
        for(int i=(t+1)/2 ; i < t ; i++){
            if( x == vetor[t-i]){
                printf("Elemento %i achado no vetor\n",x);
            }
        }
    }else if(x < vetor[(t-1)/2] ){

    }
    
    return 0;
}