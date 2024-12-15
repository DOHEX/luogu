#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int n, dp[N][N];
struct node {
    int w, l, r;
} e[N];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    memset(dp, 0x3f, sizeof(dp));

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> e[i].w >> e[i].l >> e[i].r;
    }

    for (int i = 1; i <= n; i++) {
        int l = e[i].l, r = e[i].r;
        if (l != 0) {
            dp[i][l] = dp[l][i] = 1;
        }
        if (r != 0) {
            dp[i][r] = dp[r][i] = 1;
        }
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

    int ans = 1e9;
    for (int i = 1; i <= n; i++) {

        int t = 0;
        for (int j = 1; j <= n; j++) {
            t += dp[j][i] * e[j].w;
        }
        ans = min(ans, t);
    }
    cout << ans;
    return 0;
}
