#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 10

int main(){

    int vetor[tam];

    for (int i = 0; i < tam ; i++){ scanf("%i", &vetor[i]); }

    for(int i = 0; i < tam; i++){
        for(int x = i+1; x < tam; x++){
            if(vetor[i] == vetor[x]){
                printf("valor igual : %i\n",vetor[i]);
            }
        }
    }
    
    return 0;  
}