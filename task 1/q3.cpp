#include <iostream>
using namespace std;
int main()
{
    float score;
    cout << "enter score :";
    cin >> score;

    if (score >= 90 && score <= 100)
    {
        cout << "Grade is A : Congratulation! You are eligible for the next leval.";
    }
    else if (score >= 80 && score < 90)
    {
        cout << "Grade is B : Congratulation! You are eligible for the next leval.";
    }
    else if (score >= 70 && score < 80)
    {
        cout << "Grade is c : Congratulation! You are eligible for the next leval.";
    }
    else if (score >= 50 && score < 70)
    {
        cout << "Grade is D : Congratulation! You are eligible for the next leval.";
    }
    else if (score < 50)
    {
        cout << "Grade is F : Please try again next time.";
    }

    return 0;
}