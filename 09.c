#include <stdio.h>
#include <stdlib.h>

/*
    |  Autor : Victor Luiz Bernardes |
    |  Data :  09/06/2018            |
*/

#define tam 10

int verif_zero(int *vetor){

    int cont = 0;

    for (int i = 0; i < tam; i++)
        if (vetor[i] == 0)
            cont++;

    return cont;
}

int main(){

    
    int vetor[tam] = {5,4,8,0,4,9,0,6,9,4},
    aux[tam],
    contZ,
    x=0;

    contZ = verif_zero(vetor);

    /*
    for(int i = 0 ; i < tam-cont ; i++){
        if(vetor[i] == 0){
            cont1++;
            aux2[i] = vetor[i+1];
            aux2[tam-cont1] = 0;
        }else{
            aux2[i] = vetor[i];
        }
    }
    */

    
    for(int i = 0; i < tam; i++){
        if(vetor[i] != 0 ){
            aux[x] = vetor[i];
            x++;
        }
    }

    
    while(tam-1 <= contZ){
        
    }
    

    

    for(int i = 0; i < tam ; i++){
        printf("%i\n",aux[i]);
    }

    return 0;
}
