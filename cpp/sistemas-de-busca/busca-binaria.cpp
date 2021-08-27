#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int buscaBinaria(int banco[], int numProcurado);
int getLength(int x[]);

int main () {
    int numProcurado;
    int banco[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    cout << "que número você quer achar?";
    cin >> numProcurado;
    int ret = buscaBinaria(banco, numProcurado);
    if (ret-1){
        cout << numProcurado << " não foi encontrado";
    }else{
        cout << numProcurado << "foi encontrado em " << ret;
    }
}

int buscaBinaria(int banco[], int numProcurado){
    int length = getLength(banco); //vou usar pra servir como expressão pro fim
    int comeco = 0;
    int fim = 20;
    int meio = (int) (fim+comeco)/2;
    
    while (numProcurado != banco[meio] && comeco != meio){
        if(numProcurado < banco[meio]){
            fim = meio;
        }else if(numProcurado > banco[meio]){
            comeco = meio;
        }
        meio = (int) (fim+comeco)/2; 
    }
    if(comeco == meio && banco[meio] != numProcurado){
        return -1;
    }
    return meio;
}

int getLength(int x[]){
    int length = *(&x + 1) - x;
    return length;
}
