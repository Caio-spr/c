#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int a = 1;
    cout << &a << endl;
    int *b = &a;
    cout << *b << endl;
    int c = *b;
    cout << c << endl;

    /*
    c = 5;
    cout << a << endl;
    cout << *b << endl;
    cout << c << endl;  
    return 0;
    */
}