//write a program in c++ to display the multiplication table from 1 to n
#include <iostream>
using namespace std;

    int main(){  
        int n;
        int i;
    cout << "Enter number" <<endl;
    cin>>n;

    for (i = 1; i <= 12 ; i++){
        for (int a = 1; a <= n ; a++){
            cout<<i<<" * "<<a<<" = "<< i*a<<" \t";
        }
        cout<<endl;
        }

    return 0;
}
