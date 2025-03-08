#include <iostream>
using namespace std;

void MaxMin(int arr[], int n)
{
    int maxlength = arr[0];
    int minlength = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j < n; i++)
        {
            if (arr[j] > maxlength)
            {
                maxlength = arr[j];
            }
            else if (arr[j] < minlength)
            {
                minlength = arr[j];
            }
        }
        cout << arr << endl;
    }
    
    // cout << "min" << minlength;
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
    MaxMin(arr, n);
    return 0;
}