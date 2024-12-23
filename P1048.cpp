#include <bits/stdc++.h>
using namespace std;
const int T = 1005, M = 105;

int t, m, a, b, dp[T];
// dp[j]: i个物品j时间内最大价值

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        for (int j = t; j >= a; j--) {
            dp[j] = max(dp[j], dp[j - a] + b);
        }
    }
    cout << dp[t] << "\n";
    return 0;
}
