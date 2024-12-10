#include <bits/stdc++.h>
using namespace std;

string s;
int digit, lower, upper;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> s;
    for (char c : s) {
        if ('0' <= c && c <= '9')
            digit++;
        else if ('a' <= c && c <= 'z')
            lower++;
        else if ('A' <= c && c <= 'Z')
            upper++;
    }
    cout << digit << " " << lower << " " << upper;
    return 0;
}
