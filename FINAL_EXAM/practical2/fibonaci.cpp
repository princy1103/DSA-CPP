//Print Fibonacci Series Up to a Given Number
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"enter number :";
    cin >>n;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i);
         if (i < n - 1) cout << ", ";
    }
    cout<<"]";
    return 0;
}