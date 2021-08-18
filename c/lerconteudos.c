#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <string>
// #include <fstream>
// #include <iostream>

int main(){
    int c, cont = 0;
    char conteudoArquivo[255];
    FILE *file;
    file= fopen("texto.txt","r" );
    
    
    
    if(file){
        while ((c = getc(file)) != EOF){
            // printf("%c", c);
            
            conteudoArquivo[cont]=c;
            
            cont++;
        }
        fclose(file);
    }
    
    for (cont = 0; cont<strlen(conteudoArquivo);cont++){
        printf("%c",conteudoArquivo[cont]);
    }
    
    
    
    return 0;
}