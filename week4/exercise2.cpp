#include <iostream>
using namespace std;
int n1,n2,n3;
    int main(){
        cout<<"Enter first number:"<<endl;
        cin>>n1;
        cout<<"Enter second number:"<<endl;
        cin>>n2;
        cout<<"Enter third number:"<<endl;
        cin>>n3;

        if(n1>n2 && n1>n3){
            cout<<"the first number is the largest number"<<endl;
        }
        else if(n2>n1 && n2>n3){
            cout<<"the second number is the largest number"<<endl;
        }
        else if(n3>n1 && n3>n2){
            cout<<"the third number is the largest number"<<endl;
        }
        else{
            cout<<"all numbers are equal"<<endl;
        }
    }