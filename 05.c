#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define t 5

int main(){

    int k[t] = {8,7,9,8,4},
    aux;

    for (int i = 0; i < t; i++)
        printf("%i ",k[i]);

    for (int i = 0; i < t; i = i+2){
        if (i % 2 == 0){
            if (k[i + 1] % 2 != 0){
                aux = k[i];
                k[i] = k[i + 1];
            }
        }
    }

    return 0;
}