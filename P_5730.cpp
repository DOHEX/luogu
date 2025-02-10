#include <bits/stdc++.h>
using namespace std;

int n;

string s[5][10] = {
    {"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX"},
    {"X.X", "..X", "..X", "..X", "X.X", "X..", "X..", "..X", "X.X", "X.X"},
    {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX"},
    {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X"},
    {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX"}};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    string num;
    cin >> num;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << s[i][num[j] - '0'];
            if (j < n - 1)
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}
