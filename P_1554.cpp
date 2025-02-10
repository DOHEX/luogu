#include <bits/stdc++.h>
using namespace std;

int cnt[10];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        int tmp = i;
        do {
            ++cnt[tmp % 10];
        } while (tmp /= 10);
    }
    for (int i = 0; i <= 9; ++i)
        cout << cnt[i] << " ";
    return 0;
}
