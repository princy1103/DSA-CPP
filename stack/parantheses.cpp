// check valid parantheses
#include <iostream>
#include <stack>
using namespace std;
class parantheses
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        if (s.length() % 2 != 0)
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '{' || c == '(' || c == '[')
            {
                stk.push(c);
            }
            else if (!(stk.empty()))
            {
                char top = stk.top();
                if (top == '(' && c == ')' || top == '{' && c == '}' || top == '[' && c == ']')
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        if (stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    parantheses p;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (p.isValid(s))
    {
        cout << "Valid parentheses" << endl;
    }
    else
    {
        cout << "Invalid parentheses" << endl;
    }
    return 0;
}