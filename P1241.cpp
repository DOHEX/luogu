#include <bits/stdc++.h>
using namespace std;

stack<pair<char, int>> st;
bool b[101];
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == '(' || s[i] == '[')
            st.push({s[i], i});
        else if (s[i] == ')')
        {
            if (st.empty())
                continue;
            if (st.top().first == '(')
            {
                b[i] = 1;
                b[st.top().second] = 1;
                st.pop();
            }
        }
        else if (s[i] == ']')
        {
            if (st.empty())
                continue;
            if (st.top().first == '[')
            {
                b[i] = 1;
                b[st.top().second] = 1;
                st.pop();
            }
        }
    }
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == '(' || s[i] == '[')
        {
            if (b[i])
                cout << s[i];
            else
            {
                if (s[i] == '(')
                    cout << "()";
                else
                    cout << "[]";
            }
        }
        else
        {
            if (b[i])
                cout << s[i];
            else
            {
                if (s[i] == ')')
                    cout << "()";
                else
                    cout << "[]";
            }
        }
    }
    return 0;
}
