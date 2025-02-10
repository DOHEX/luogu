#include <bits/stdc++.h>
using namespace std;
int n, m, k, ans;
bool b[105][105];

bool pd(int x, int y) {
    if (x < 1 || y < 1 || x > n || y > n)
        return 0;
    return 1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m >> k;
    for (int i = 1; i <= m + k; i++) {
        int o, p;
        cin >> o >> p;
        for (int x = -2; x <= 2; x++)
            for (int y = -2; y <= 2; y++)
                if ((i > m || abs(x) + abs(y) <= 2) && pd(x + o, p + y))
                    b[x + o][p + y] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            ans += !b[i][j];
    cout << ans;
    return 0;
}