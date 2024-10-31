#include <iostream>
using namespace std;

int main(){
    char grade = "D";
    
    switch(grade){
        case 'A':
            cout << "Excellent!" << endl;
        case 'B':
            cout << "Very Good!" << endl;
        case 'C':
            cout << "Well Done!" << endl;
        case 'D':
            cout << "You pass!" << endl;
        case 'F':
            cout << "Better try again!" << endl;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}