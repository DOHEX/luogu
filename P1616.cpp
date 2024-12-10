#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 5, T = 1e7 + 5;

struct node {
    int t, v;
} e[M];

long long t, n, dp[T];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t >> n;
    for (int i = 1; i <= n; i++)
        cin >> e[i].t >> e[i].v;
    for (int i = 1; i <= n; i++)
        for (int j = e[i].t; j <= t; j++)
            dp[j] = max(dp[j - e[i].t] + e[i].v, dp[j]);
    cout << dp[t];
    return 0;
}