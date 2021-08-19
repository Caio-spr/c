#include <iostream>
#include <string>

using namespace std;
int main (){

    int array[2][2],i, j;

    array[0][0]=0;
    array[0][1]=1;
    array[1][0]=2;
    array[1][1]=3;


    for(i = 0; i<2;i++){
        for(j=0;j<2;j++){
            cout << array[i][j] << endl;   
        }
    }
}
