#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int boy = 0, girl = 0;
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l - 2; i++)
        boy += (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y');
    for (int i = 0; i < l - 3; i++)
        girl += (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' ||
                 s[i + 3] == 'l');
    cout << boy << "\n" << girl;
    return 0;
}
