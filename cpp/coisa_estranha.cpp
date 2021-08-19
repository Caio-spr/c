#include <string>
#include <iostream>

using namespace std;

int main(){
//fill an 2x2 array with user inputs, then change the values between the first and second line
//ex
/*  0 0 = 1
*   0 1 = 2
*   1 0 = 3
*   1 1 = 4
*   then
*   0 0 = 3
*   0 1 = 4
*   1 0 = 1
*   1 1 = 2
*/

    
    
    float array[2][2];
    
    // this will be filling the 'array[0][x]';
    for(int part1 = 0; part1<2; part1++){
        printf("give me a value for array [0][%d]",part1);
        scanf("%f",&array[0][part1]);
    }
    //this will be filling the 'array[1][x]'
    for(int part2 = 0; part2<2; part2++){
        printf("give me a value for array [1][%d]",part2);
        scanf("%f",&array[1][part2]);
    }
    
    //this will print the array filled by the user
    for(int print1=0; print1<2;print1++){
        for(int print2=0; print2<2;print2++){
            printf("array[%d][%d]==%f\n",print1,print2,array[print1][print2]);
        }
    }

    //this segment will ask the user if he wants the program to do its job (no need just play around)
    bool reverse = false;
    char yn;
    

    while(yn != 'y' && yn!='n'){
        printf("do you want this program to do its job? y/n");
        scanf("%c",&yn);
        if (yn == 'y'){
            reverse = true;
        }else if(yn == 'n'){
            cout << "k";
            reverse = false;
        }
    }

    //the program doing its job

    if (reverse=true){
        for(int j = 0; j<2; j++){
            int aux=array[0][j];
            int i=0;
            for(i=0; i<1;i++){
                array[i][j]=array[i+1][j];                
            }
            array[i][j]=aux;
        }
        for(int print1=0; print1<2;print1++){
            for(int print2=0; print2<2;print2++){
                printf("array[%d][%d]==%f\n",print1,print2,array[print1][print2]);
            }
        }
    }
}
    
    
    //the program printing the job he did
