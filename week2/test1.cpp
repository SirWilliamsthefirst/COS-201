#include <iostream>
using namespace std;
int score = 88;
int main(){
    if (score >= 70 && score <= 100)
        cout<< "Grade A" << '\n'<<"Excellent" <<endl;
    else if (score >= 60 && score <= 69)
        cout<< "Grade B"<<'\n'<<"Very good" <<endl;
    else if (score >= 50 && score <= 59)
        cout<< "Grade C"<<'\n'<<"Good" <<endl;
    else if (score >= 40 && score <= 49)
        cout<< "Grade D"<<'\n'<<"Average" <<endl;
    else if (score >= 0 && score <= 39)
        cout<< "Grade D"<<'\n'<< "Poor" <<endl;
    else
        cout<< "Enter valid score" <<endl;

}