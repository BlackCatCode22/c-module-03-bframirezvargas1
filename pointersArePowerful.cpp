// pointersArePowerful.cpp
// dh 02/18/2025
// Brenton Ramirez-Vargas
// demo for CIT-66

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {20, 40, 60, 80, 100};
// 0 is considered 20,  1 is considered 40, and so on...
// Num inside brackets are called elements.
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "] = " << (p + i) << endl;
        cout << "Value of arr[" << i << "] = " << *(p + i) << endl;
    }

    return 0;
}