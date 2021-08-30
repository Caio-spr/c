#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#define TAM 10


using namespace std;




void imprimeVetor(int vetor[]);
int pilhaPush(int vetor[], int valor, int* topo);








//main

int main(){
    int pilha[TAM];
    

}










//métodos

void imprimeVetor (int vetor[TAM]){
    for (int i = 0; i < TAM; i++ ){
        cout << vetor[i] << " - ";
    }
}



int pilhaPush(int vetor[], int valor){
    int topo = -1;

    if (topo == TAM-1){
        cout << "pilha cheia";
    }else{
        topo++;
        vetor[topo] = valor;
    }

}