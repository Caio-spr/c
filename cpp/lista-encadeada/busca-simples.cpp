#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <new>
#include <iostream>


using namespace std;

int buscaSimples(int x[],int input);
int incluirNoBanco(int x[],int qni, int length);
int imprimeBanco(int banco[], int length);
int findLength(int x[]);

struct bancoItem{
    int valor;
    bancoItem* proximo;
};

int main () {

    //fazendo um sistema com (mini micro mini*nano⁻²) banco de dados que aceita inputs e
    //faz uma pesquisa do tipo simples (indo de dado em dado até encontrar o que o usuário quer)
    int qni; //quantos numeros incluir
    bancoItem *banco1;
    banco1 = (bancoItem*) malloc(sizeof(bancoItem)); 
    int banco[]={1,5,3,2,6,4,10,9};//banco drr
    int length = findLength(banco);
    banco[length];
    char yn; //sim e não em alguns lugares

    imprimeBanco(banco, length);
    cout << "\nvocê quer incluir algum valor? y/n" << endl;
    cin >> yn;

    

    //aqui é pra continuar adicionando números depois do que foi dito de quantos números incluir
    while (yn == 'y'){

        cout << "quantos?" << endl;
        cin >> qni;

        cout << "insira " << qni << " números";
        incluirNoBanco(banco,qni, length);
        cout<< "\nquer incluir mais? y/n" << endl;
        cin >> yn;

        //para imprimir
        length = findLength(banco);
        imprimeBanco(banco, length);


        if (yn == 'y'){
            cout << "quantos?" << endl;
            cin >> qni;
        }else{
            break;
        }
    }


    int numProcurado;
    cout << "qual número você quer achar?" << endl;
    cin >> numProcurado;
    
    int position = buscaSimples(banco, numProcurado);
    
    if (position == -1){
        cout << "número não encontrado";
    }else{
        cout << "o número " << numProcurado << " está na posição: " << position << endl;
    }
    return 0;
    exit(1);
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

int incluirNoBanco(int x[], int qni, int length){
    // x[]= x[TAM+qni];
    for (int i = 0; i <= qni; i++){
        cin >> x[i];
    }
    length = *(&x + 1) - x;
    return x[length];
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