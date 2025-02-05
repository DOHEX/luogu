#include <bits/stdc++.h>
using namespace std;

int n, m;
int dp[30000];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int v, p;
        cin >> v >> p;
        for (int l = n; l >= v; l--)
            dp[l] = max(dp[l], dp[l - v] + v * p);
    }
    cout << dp[n];
    return 0;
}
