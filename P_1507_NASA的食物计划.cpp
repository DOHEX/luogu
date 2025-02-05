#include <bits/stdc++.h>
using namespace std;

int H, T, N;
int dp[400][400];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> H >> T;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        int hi, ti, ki;
        cin >> hi >> ti >> ki;
        for (int h = H; h >= hi; h--)
            for (int t = T; t >= ti; t--)
                dp[h][t] = max(dp[h][t], dp[h - hi][t - ti] + ki);
    }
    cout << dp[H][T];
    return 0;
}
