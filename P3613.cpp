#include <bits/stdc++.h>
using namespace std;

int n, q;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> q;
    vector<vector<int>> g(n + 1);
    for (int h = 1; h <= q; ++h)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, j, k;
            cin >> i >> j >> k;
            if (g[i].size() < j + 1)
            {
                g[i].resize(j + 1);
            }
            g[i][j] = k;
        }
        if (op == 2)
        {
            int i, j;
            cin >> i >> j;
            cout << g[i][j] << "\n";
        }
    }
    return 0;
}
