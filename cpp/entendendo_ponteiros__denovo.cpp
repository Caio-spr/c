#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int a = 1;
    cout << &a << endl;
    int* b = &a;
    cout << *b;
    
    return 0;
}