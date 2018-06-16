#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define t 20

int main(){

    int k[t],
    aux;

    
    for(int i = 0; i < t; i++){
        scanf("%i",&k[i]);
    }
    

    for (int i = 0; i < t; i++)
        printf("%i ",k[i]);

    for (int i = 0; i < t; i = i+2){
        if (i % 2 == 0){
            aux = k[i];
            k[i] = k[i+1];
            k[i+1] = aux;  
        }
    }

    printf("\n");

    for (int i = 0; i < t; i++)
        printf("%i ",k[i]);

    return 0;
}