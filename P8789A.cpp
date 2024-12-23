#include <bits/stdc++.h>
using namespace std;

long long f[2030][11][2030];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    f[0][0][0] = 1;
    for (int i = 1;i <= 2022;++i) {
        for (int j = 0;j <= 10;++j) {
            for (int v = 0;v <= 2022;++v) {
                if (v - i >= 0 && j - 1 >= 0) {
                    f[i][j][v] = f[i - 1][j - 1][v - i];
                }
                f[i][j][v] += f[i - 1][j][v];
            }
        }
    }
    cout << f[2022][10][2022];
    return 0;
}
