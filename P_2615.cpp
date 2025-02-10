#include <bits/stdc++.h>
using namespace std;

int n;
int hf[40][40];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int r = 1, c = (n >> 1) + 1;
    for (int i = 1; i <= n * n; ++i) {
        hf[r][c] = i;
        if (r == 1 && c != n) {
            r = n;
            ++c;
        } else if (r != 1 && c == n) {
            --r;
            c = 1;
        } else if (r == 1 && c == n)
            ++r;
        else {
            if (hf[r - 1][c + 1] == 0) {
                --r;
                ++c;
            } else
                ++r;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            cout << hf[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
