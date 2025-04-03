// Two Sum Problem (Find a Pair that Sums to Target)
#include <iostream>
#include <vector>
using namespace std;
void SumTareget(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << "Can't Find Pair";
}
int main()
{
    int target = 9;
    vector<int> arr1 = {2, 7, 11, 15};
    SumTareget(arr1, target);
    return 0;
}