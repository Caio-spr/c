#include <string>
#include <iostream>
#include <new>

using namespace std;

struct data{
    int dia;
    int mes;
    int ano;
}data;

struct usuario{
    string nome;
    string senha;
    int id;
    struct data data;

};

int main(){
    usuario user;
    usuario *Caio;
    Caio = &user;

    Caio -> nome = "Caio";
    Caio -> senha = "1234";
    Caio -> id = 77707;

    int io=2;
    int *jj;
    jj = &io;




    // Caio -> dataNascimento -> dia = 21;
    // Caio -> dataNascimento -> mes = 07;
    // Caio -> dataNascimento -> ano = 2006;


    // cout << Caio->dataNascimento;
    return 0;
}