#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 1024

using namespace std;

int buscaSimples(int x[],int input);
int incluirNoBanco(int x[], char y);
void imprime_vetor(int x);

int main () {
    int qni;
    int banco[TAM]={1,5,3,2,6,4,10,9};
    char yn;
    cout << "você quer incluir algo no Banco  y/n";
    cin >> yn;
    cout << "quantos números você quer incluir?";
    cin >> qni;
    while (yn = 'y'){
        incluirNoBanco(banco);
        cout <<"quer incluir mais?";
        cin >> yn;
        
    }


    int numProcurado;
    cout << "qual número você quer achar?" << endl;
    cin >> numProcurado;
    
    int position = buscaSimples(banco, numProcurado);
    
    if (position == -1){
        cout << "número não encontrado";
    }else{
        cout << "o número " << numProcurado << " está na posição: " << position;
    }
    return 0;
}




int buscaSimples(int x[],int numProcurado){
    int cont;
    bool encontrado;
    for (cont = 0; cont < 10; cont ++) {
        if(numProcurado == x[cont]){
            encontrado=true;
            break;
        }
    }
    if(encontrado == true){
        return cont;
    }else{
        return -1;
    }
}

int incluirNoBanco(int x[]){
    
}