#include <iostream>
using namespace std;
int main()
{
    int marks;
    // char grade;
    // int m;
    cout << "enter marks :";
    // cin>>grade;
    cin >> marks;

    switch (marks / 10)
    {
    case 10:
        cout << "A";
        break;
    case 9:
        cout << "b";
        break;
    case 8:
        cout << "c";
        break;
    case 7:
        cout << "d";
        break;

    default:
        cout << "Enter valid grade.";
        break;
    }

    return 0;
}