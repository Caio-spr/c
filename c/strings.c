#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


void main (){
    setlocale(LC_ALL,"");
    
    
    //how to use strings
    //variable (must be an array)
    char romeoAndJuliet[255];
    
    //give the instruction
    printf("write 'Romeo and Juliet'\n");
    
    //getting the input word
    setbuf(stdin, 0);
    
    //reads the string
    fgets(romeoAndJuliet,255,stdin);
    
    //Cleans the memory
    romeoAndJuliet[strlen(romeoAndJuliet)-1] = "\0";
    
    
    //prints in the screen
    printf("%s", romeoAndJuliet);

}