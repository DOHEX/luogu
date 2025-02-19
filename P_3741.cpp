#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == 'V' && s[i + 1] == 'K') {
            s[i] = s[i + 1] = 'X';
            cnt++;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != 'X' && s[i] == s[i + 1]) {
            cnt++;
            break;
        }
    }
    cout << cnt;
    return 0;
}
