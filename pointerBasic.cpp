// pointersBasic.cpp
// dh 02/23/2025
// Brenton Ramirez-Vargas
// demo for CIT-66

#include <iostream>
using namespace std;

int main() {

    int a = 100;
    int *p;
    p = &a;

    cout << "Address in pointer p: " << p << endl;
    cout << "Value of a using pointer p: " << *p << endl;

    *p = 250;
    cout << "New value of a: " << a << endl;

    return 0;
}