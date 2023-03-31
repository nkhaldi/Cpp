/*
 * Программа проверяющая правильность расстановки скобок в строке
 */

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string);

int main()
{
    string inp;
    cin >> inp;
    cout << isValid(inp) << endl;
}

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            if (st.size() == 0)
                return false;

            char top = st.top();
            st.pop();

            if (s[i] == ']' && top != '[')
                return false;
            else if (s[i] == ')' && top != '(')
                return false;
            else if (s[i] == '}' && top != '{')
                return false;
        }
        else
        {
            return false;
        }
    }

    return st.size() == 0;
}
