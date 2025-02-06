//TEMPLATE: 分组背包

#include <bits/stdc++.h>
using namespace std;

int t[105][1005], dp[105];

struct item {
    int w, v;
} lst[1005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int M, n;
    cin >> M >> n;
    int K=0;
    for (int i = 1; i <= n; ++i) {
        int ci;
        cin >> lst[i].w >> lst[i].v >> ci;
        t[ci][0]++;
        t[ci][t[ci][0]] = i;
        K = max(K, ci);
    }

    for (int k = 1; k <= K; ++k)
        for (int m = M; m > 0; --m)
            for (int i = 1; i <= t[k][0]; ++i)
                if (m >= lst[t[k][i]].w)
                    dp[m] = max(dp[m], dp[m - lst[t[k][i]].w] + lst[t[k][i]].v);

    cout << dp[M];
    return 0;
}
