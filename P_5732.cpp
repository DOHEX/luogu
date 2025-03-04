#include <bits/stdc++.h>
using namespace std;

int a[21][21];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    a[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        a[i][1] = a[i][i] = 1;
        for (int j = 1; j <= i; ++j) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
