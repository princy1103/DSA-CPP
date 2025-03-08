#include <iostream>
using namespace std;

void reorderArray(int arr[], int n)
{
    int left = 0, right = n - 1;
    int result[n], index = 0;
    while (left <= right)
    {
        result[index++] = arr[left++];
        if (left <= right)
        {
            result[index++] = arr[right--];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = result[i];
    }
}
int main()
{
    int n;
    cin >> n;
    // int arr[] = {10, 12, 50, 190, 200};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    // int n = sizeof(arr) / sizeof(arr[0]);
    reorderArray(arr, n);
    cout << "Output:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}