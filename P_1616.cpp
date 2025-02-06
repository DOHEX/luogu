//TEMPLATE: 完全背包

#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_T = 1e7+5;

int T, M;
long long dp[MAX_T];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> T >> M;
    for (int i = 1; i <= M; i++) {
        int ai, bi;
        cin >> ai >> bi;
        for (int a = ai; a <= T; a++)
            dp[a] = max(dp[a], dp[a - ai] + bi);
    }
    cout << dp[T];
    return 0;
}
