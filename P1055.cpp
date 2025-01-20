#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0, j = 1; j <= 9; i++) {
        if (s[i] != '-') {
            sum += (s[i] - '0') * j;
            j++;
        }
    }
    sum %= 11;
    char ch = sum == 10 ? 'X' : sum + '0';
    if (ch == s[12])
        cout << "Right";
    else {
        s[12] = ch;
        cout << s;
    }
    return 0;
}
