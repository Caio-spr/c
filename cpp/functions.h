#include <stdio.h>
#include <stdlib.h>

void juliet(){
    printf("alo você");
}

int* alocaVetor(int tamanho){

    //variável ponteiro auxiliar

    int *aux;

    aux = (int *) malloc(tamanho *sizeof (int));
    return aux;
}