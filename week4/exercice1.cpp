//array example summing up the elements of an array
#include <iostream>
using namespace std;

int matrice1[3][3] = {0,1,2,3,4,5,6,7,8};
int matrice2[3][3] = {9,1,2,3,4,5,6,7,8};
int result[3][3];

int main()
{
    for(int n=0 ; n<3 ; n++)
    {
        for (int i=0 ; i<3 ; i++)
        {
            result[n][i] = matrice2[n][i] + matrice1[n][i];
    
            cout << result[n][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}