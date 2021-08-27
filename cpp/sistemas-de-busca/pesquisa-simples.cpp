#include <iostream>
#include <string>


using namespace std;
int buscaSimples(int x[],int numProcurado);


int main (){
    unsigned tam = 10;
    int banco[]= {1,2,3,4,5,6,7,8,9,10};
    int num;
    
    cin >> num;
    
    
    int position = buscaSimples(banco, num);
    if (position == -1){
        cout << "numero não foi encontrado";
    }else{
        cout << "o número: " << num << " foi encontrado na posição: " << position;
    }
    
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