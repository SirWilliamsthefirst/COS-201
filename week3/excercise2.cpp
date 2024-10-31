#include <iostream>
using namespace std;

    int main(){  
        int n;
        int i;
        int a ;
    cout << "Enter lower number" <<endl;
    cin>>n;
    cout << "Enter higher number" <<endl;
    cin>>i;
    int sum =0;
    for(a = n; a <= i ; a++){
        if(a%2 == 0){
            continue;
        }
        sum+=a;
        cout<<a<<endl;
        }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
