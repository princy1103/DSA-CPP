// print array in reverse order
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "array :";
        cin >> arr[i];
    }
    reverseArray(arr, n);
    return 0;
}