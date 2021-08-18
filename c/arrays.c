#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main(){
    //create an algorythm that reads 3 values and then calculate the average of said values
    int input;
    printf("how many numbers?");
    scanf("%d",&input);
    int array[input];
    int a;
    float res = 0;

    printf("give me %d ints\n",input);
    for(int i = 0; i<input; i++){
        scanf("%d",&array[i]);
        res+=array[i];
    }
    res=res/input;

    printf("the average is %.2f", res);    
}