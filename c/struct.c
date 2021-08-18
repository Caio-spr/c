#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

struct palavra{
    int ordem;
    char letra;
    char texto[255];


};

struct user{
    int id;
    char name[17];
    char password[30];
    struct data dataNascimento;
};

int main(){
    struct user Caio;
    Caio.id = 7707 ;
    strcpy(Caio.name,"joel");
    strcpy(Caio.password,"1234");
    Caio.dataNascimento.dia=21;
    Caio.dataNascimento.mes=07;
    Caio.dataNascimento.ano=2006;



    return 0;

}