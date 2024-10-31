#include <iostream>
using namespace std;

int main(){

    int var = 10;
    int *ptr;
    int val;
        ptr = &var;//take the address of var
        val = *ptr;//take the value available at ptr

    cout << "value or var :" << var << endl; 
    cout << "value or ptr :" << ptr << endl;
    cout << "value or val :" << val << endl;

    return 0;
}