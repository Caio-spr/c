#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Smartphone
{
    string name;
    string color;
    int storage;
    int RAM;
    float screenSize;
};

void printSmartphone(Smartphone x);

int main ()
{
    Smartphone xrn9;

    xrn9.color = "black";
    xrn9.name = "Xiaomi Redmi Note 9";
    xrn9.RAM = 8;
    xrn9.screenSize = 6.5;
    xrn9.storage = 128;
    
    
    printSmartphone(xrn9);
    
    return 0;
}


void printSmartphone(Smartphone x){
    cout << "name:" << x.name << endl;
    cout << "color:" << x.color << endl;
    cout << "storage:" << x.storage << endl;
    cout << "RAM:" << x.RAM << endl;
    cout << "screensize:" << x.screenSize << endl;
}