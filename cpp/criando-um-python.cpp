#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream py;

    py.open("ola_mundo.py");

    py << "print('olá mundo')";
    return 0;
}