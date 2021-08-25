#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <new>
#include <iostream>


using namespace std;

struct bancoItem{
    int valor;
    bancoItem* proximo;
};

int buscaSimples(int x[],int input);
int incluirNoBanco(bancoItem* primeiroItem,int input);
int imprimeBanco(int banco[], int length);
int findLength(int x[]);


    
int main () {
    bancoItem* banco1;
    banco1 = (bancoItem*) malloc(sizeof(bancoItem));
    *banco1 -> valor=1;
    *banco1 -> proximo = NULL;

    incluirNoBanco(banco1);
    cout << banco1;
}


int findLength(int x[]){
    int length = *(&x + 1) - x;
    return length;
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

int incluirNoBanco(bancoItem* primeiroItem,int input){
    bancoItem* aux = *primeiroItemproximo;
    bancoItem* aux2;
    
    while(*aux -> proximo!=NULL){
        aux=*aux -> proximo;
    }
    
    aux2 = (bancoItem*) malloc(sizeof(bancoItem));
    *aux2 -> valor = input;
    *aux2 -> proximo = NULL;
    
    *aux -> proximo = aux2;
    
    return 0;
}

int imprimeBanco(int banco[], int length){
    cout << length << endl;
    for (int i = 0 ; i < length; i++){
        if (i != length -1){
            cout << banco[i] << ", "; 
        }else{
            cout << banco[i];
        }
    }
    return 0;
}