#include <bits/stdc++.h>
using namespace std;

int n, m, o, p;
bool b[25][25];
long long f[23][23];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m >> o >> p;
    n += 2;
    m += 2;
    o += 2;
    p += 2;
    b[o][p] = 1;
    b[o + 1][p + 2] = 1;
    b[o + 2][p + 1] = 1;
    b[o + 2][p - 1] = 1;
    b[o + 1][p - 2] = 1;
    b[o - 1][p - 2] = 1;
    b[o - 2][p - 1] = 1;
    b[o - 2][p + 1] = 1;
    b[o - 1][p + 2] = 1;
    f[2][2] = 1;
    for (int x = 2; x <= n; ++x) {
        for (int y = 2; y <= m; ++y) {
            if (b[x][y] == 1 || x == 2 && y == 2)
                continue;
            f[x][y] = f[x - 1][y] + f[x][y - 1];
        }
    }
    cout << f[n][m];
    return 0;
}
