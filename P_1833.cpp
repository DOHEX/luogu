//TEMPLATE: 混合背包

#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int T, n;
    {
        int h1, m1, h2, m2;
        scanf("%d:%d %d:%d %d", &h1, &m1, &h2, &m2, &n);
        T = (h2 - h1) * 60 + m2 - m1;
    }

    for (int i = 1; i <= n; ++i) {
        int ti, ci, pi;
        scanf("%d %d %d", &ti, &ci, &pi);
        if (pi == 0)
            for (int t = ti; t <= T; ++t)
                dp[t] = max(dp[t], dp[t - ti] + ci);
        else {
            int idx = 0, c = 1, list[50];
            while (pi > c) {
                pi -= c;
                list[++idx] = c;
                c <<= 1;
            }
            list[++idx] = pi;

            for (int j = 1; j <= idx; ++j)
                for (int t = T; t >= list[j] * ti; --t)
                    dp[t] = max(dp[t], dp[t - list[j] * ti] + list[j] * ci);
        }
    }
    cout << dp[T];
    return 0;
}
