#include <string>
#include <iostream>

using namespace std;

int main(){
    int linhas=3,colunas=3;
    int **matriz;

    matriz = (int **) malloc (linhas * sizeof(int *)); 

    for(int i=0; i<linhas; i ++){
        matriz[i]= (int *) malloc (colunas * sizeof(int));

    }
}