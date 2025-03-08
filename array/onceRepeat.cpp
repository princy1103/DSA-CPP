// Write a C++ program to find the element that appears only once in an array, where all other elements appear twice.
#include <iostream>
using namespace std;

void Nomatch(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                cout << "Element that appears once :" << arr[i];
                break;
            }
        }
    }
    cout << "Every elements are repeated";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "]";
        cin >> arr[i];
    }
    Nomatch(arr, n);

    return 0;
}