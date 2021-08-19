#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <new>
#include <iostream>


using namespace std;

int buscaSimples(int x[],int numProcurado);
int incluirNoBanco(int x[], char y);

int main () {
    int tamMax = 1024;
    int banco[tamMax]={1,5,3,2,6,4,10,9};
    char yn;
    cout << "você quer incluir algo no Banco  y/n";
    cin >> yn;
    int incluir= incluirNoBanco(banco[],yn);
    
    int numProcurado;

    printf( "qual número você quer achar?\n");
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

int incluirNoBanco(int x[],char y){


    if(y=='y'){
        cin >> ;
    }


}