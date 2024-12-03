#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int n, k, ans;
vector<int> v[N];

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x % k].push_back(x);
    }
    for (int i = 0; i < k; i++)
        sort(v[i].begin(), v[i].end(), cmp);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int u = k - i - j;
            if (u < 0)
                u += k;
            if (u == k)
                u = 0;
            int t;

            if (i != j && i != u && j != u)
            {
                if (v[i].size() < 1 || v[j].size() < 1 || v[u].size() < 1)
                    continue;
                t = v[i][0] + v[j][0] + v[u][0];
            }
            if (i == j && i != u)
            {
                if (v[u].size() < 1 || v[i].size() < 2)
                    continue;
                t = v[i][0] + v[i][1] + v[u][0];
            }
            if (i == u && i != j)
            {
                if (v[j].size() < 1 || v[i].size() < 2)
                    continue;
                t = v[i][0] + v[i][1] + v[j][0];
            }
            if (j == u && i != j)
            {
                if (v[i].size() < 1 || v[j].size() < 2)
                    continue;
                t = v[j][0] + v[j][1] + v[i][0];
            }
            if (i == j && j == u)
            {
                if (v[i].size() < 3)
                    continue;
                t = v[i][0] + v[i][1] + v[i][2];
            }
            ans = max(ans, t);
        }
    }
    cout << ans;
    return 0;
}
