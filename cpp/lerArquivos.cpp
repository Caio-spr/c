#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    // ifstream input ("texto.txt");

    
    
    // string textoLido;
    
    // for (string line; getline(input, line);){
    //     textoLido+=line;
    // }
    
    // cout << textoLido;


    ofstream meuArquivo;

    meuArquivo.open("texto.txt");

    meuArquivo.clear();

    meuArquivo.close();
    
    return 0;
}