#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 9

void main(){


    int vetor1[tam],
    vetor2[tam],
    vetor3[tam],
    aux[tam],
    cont=0;
    
    printf("Informe o primeiro vetor\n");
    for(int i = 0; i < tam ; i++){ scanf("%i",&vetor1[i]); }

    printf("Informe o segundo vetor\n");
    for (int i = 0; i < tam; i++){ scanf("%i", &vetor2[i]); }

    printf("Informe o terceiro vetor\n");
    for (int i = 0; i < tam; i++){ scanf("%i", &vetor3[i]); }

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