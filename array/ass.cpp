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
    int arr[] = {10,34,5,100,30};
    int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    //final output 
    reorderArray(arr, n);
    cout << "Output:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}