#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_W = 4e4 + 5;

int N, W;
long long dp[MAX_W];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> N >> W;
    for (int i = 1; i <= N; ++i) {
        int vi, wi, mi;
        cin >> vi >> wi >> mi;

        int index = 0, c = 1;
        int list[25];
        while (mi > c) {
            mi -= c;
            list[++index] = c;
            c *= 2;
        }
        list[++index] = mi;

        for (int j = 1; j <= index; ++j)
            for (int w = W; w >= list[j] * wi; w--)
                dp[w] = max(dp[w], dp[w - list[j] * wi] + list[j] * vi);
    }
    cout << dp[W];
    return 0;
}
