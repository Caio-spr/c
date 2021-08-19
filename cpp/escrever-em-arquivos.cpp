#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main (){

    ofstream arquivoSaida;

    arquivoSaida.open("texto.txt", ios_base::app);

    arquivoSaida << "olá mundooooo";

    arquivoSaida.close();

    return 0;
}