#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <new>
#include <iostream>
#define TAM 1024

using namespace std;

int buscaSimples(int x[],int input);
int incluirNoBanco(int x[],int qni);
void imprimeBanco(int banco[]);

int main () {

    //fazendo um sistema com (mini micro mini*nano⁻²) banco de dados que aceita inputs e
    //faz uma pesquisa do tipo simples (indo de dado em dado até encontrar o que o usuário quer)


    int qni; //quantos numeros incluir
    int banco[TAM]={1,5,3,2,6,4,10,9}; //banco drr
    char yn; //sim e não em alguns lugares


    imprimeBanco(banco);
    cout << "você quer incluir algo no Banco  y/n";
    cin >> yn;
    cout << "quantos números você quer incluir?";
    cin >> qni;

    //aqui é pra continuar adicionando números depois do que foi dito de quantos números incluir
    while (yn = 'y'){
        cout << "insira " << qni << " números";
        incluirNoBanco(banco,qni);
        cout <<"quer incluir mais? y/n" << endl;
        cin >> yn;
        imprimeBanco(banco);
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

int incluirNoBanco(int x[], int qni){
    for (int i = 0; i < qni; i++){
        cin >> x[i];
    }
}

int imprimeBanco(int banco[]){
    //vai funcionar pegando o tamanho do array e dividindo pelo tamanho de um inteiro,
    // o que vai dizer a quantidade de inteiros dentro do array, depois esse valor vai
    //ser usado como parâmetro no for pro contador e vão ser impressos todos os valores 
    // guardados no array
    int length = sizeof(banco[TAM])/sizeof(int);
    int *length = &banco[length];
    for (int i = 0 ; i < length; i++){
        cout << banco[i];
    }
    return banco[length];
}