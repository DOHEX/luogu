#include <bits/stdc++.h>
using namespace std;

int n, m, r, x, y, sum;

bool nn[101][101];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m >> r;
    while (m--)
    {
        cin >> x >> y;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (pow(i - x, 2) + pow(j - y, 2) <= r * r)
                {
                    nn[i][j] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum += nn[i][j];
        }
    }
    cout << sum;
    return 0;
}
