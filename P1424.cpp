#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int x, n;
    cin >> x >> n;
    int ans = n / 7 * 5;
    n %= 7;
    for (int i = x; i <= x + n - 1; i++) {
        if (i == 6 || i == 7)
            continue;
        ans++;
    }
    cout << ans * 250;
    return 0;
}
