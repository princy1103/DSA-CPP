#include <iostream>
using namespace std;

int main()
{

    float marks;

    cout << "Enter your marks out of 100: ";
    cin >> marks;

    char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                   : (marks >= 70)   ? 'C'
                                   : (marks >= 60)   ? 'D'
                                   : (marks >= 50)   ? 'E'
                                                     : 'F';
    cout << "Your grade is: " << grade << endl;

    return 0;
}
