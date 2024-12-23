#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int n, m, dp[N][N];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    memset(dp, 0x3f, sizeof(dp));

    cin >> n >> m;
    int u, v, w;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> w;
        dp[u][v] = dp[v][u] = min(dp[u][v], w);
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    dp[i][j] = 0;
                else
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
