#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> st;
    string s = "{{[()(()]}}";
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(s[i]);

        else if (!st.empty() && s[i] == '}' && st.top() == '{')
            st.pop();
        else if (!st.empty() && s[i] == ')' && st.top() == '(')
            st.pop();
        else if (!st.empty() && s[i] == ']' && st.top() == '[')
            st.pop();

        else{
            cout << "Not a valid parentheses";
            break;
        }
    }
    if(st.empty())cout << "Valid parentheses";
    return 0;
}