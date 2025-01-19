#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 5;
ll f[15][2025];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    f[0][0] = 1;
    for (int i = 1; i <= 2022; i++) {
        for (int j = 10; j >= 1; j--) {
            for (int k = i; k <= 2022; k++) {
                f[j][k] += f[j - 1][k - i];
            }
        }
    }
    cout << f[10][2022];
    return 0;
}
