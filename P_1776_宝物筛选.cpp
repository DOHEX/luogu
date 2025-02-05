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
        for (int w = W; w >= wi; w--)
            for (int k = 1; k * wi <= w && k <= mi; ++k)
                dp[w] = max(dp[w], dp[w - k * wi] + k * vi);
    }
    cout << dp[W];
    return 0;
}
