#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void reverseArr(vector<int> arr, int n, int k)
{
    vector<int> temp(n);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }
    for (int i = k; i < n; i++)
    {
        temp[i] = arr[i - k];
    }
    arr = temp;
}

int main()
{
    int n, a, k;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> arr;
    cout << "Enter " << n << " elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    reverseArr(arr, n, k);
    cout << "Rotated vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
