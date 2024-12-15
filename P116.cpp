#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int n, m, a, dp[N];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> n >> m;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        for (int j = m; j >= a; j--)
            dp[j] += dp[j - a];
    }
    cout << dp[m];
    return 0;
}
