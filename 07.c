#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 9

void main(){


    int vetor1[tam] = {2,5,7,8,4,5,6,1,6},
    vetor2[tam] = {0,5,6,4,2,3,6,5,8},
    vetor3[tam] = {9,5,8,4,21,1,5,12},
    aux[tam],
    cont=0;
    
    
    for(size_t i = 0; i < tam; i++){
        if(i < 3){
            aux[i] = vetor1[i];
            cont++; 
        }else if( i >= 3 && i < 6){
            aux[i] = vetor2[cont]; 
            cont++;
        }else if( i >= 6){
            aux[i] = vetor3[cont-1]; // -1 pois o cont vai chegar valendo 6
            cont++;
        }
    }

    
    for(size_t i = 0; i < tam; i++)
    {
        printf("[%li] = %i\n",i,aux[i]);
    }
    
    
}