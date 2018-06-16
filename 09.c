#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 20

int main(){

    
    int vetor[tam],
    aux[tam],
    contZ = 0,
    x = 0,
    i = 0;

    
    for (int i = 0; i < tam; i++){
        scanf("%i",&vetor[i]);
    }
    

    while(x < tam){
        if(vetor[x] != 0){
            aux[i] = vetor[x];
            i++;
        }else{
            aux[(tam-1)-contZ] = 0;
            contZ++;
        }
        x++;
    }

    for(int i = 0; i < tam ; i++){
        printf("%i\n",aux[i]);
    }

    return 0;
}
