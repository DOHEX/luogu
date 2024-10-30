#include <bits/stdc++.h>
using namespace std;

string s;
int digit, lower, upper;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> s;
    for (char c : s)
    {
        digit += 48 <= c && c <= 57;
        lower += 97 <= c && c <= 122;
        upper += 65 <= c && c <= 90;
    }
    cout << digit << " " << lower << " " << upper;
    return 0;
}
