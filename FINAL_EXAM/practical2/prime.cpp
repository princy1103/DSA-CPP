//find all prime numbers in 2D array
#include<iostream>
using namespace std;
bool checkPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2 ;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int matrix[3][3]={{2,4,6},{3,5,8},{9,11,12}};
    cout<<"Prime numbers :";
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
        {
            if(checkPrime(matrix[i][j])){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}