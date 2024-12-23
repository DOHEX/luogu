#include <bits/stdc++.h>
using namespace std;

int x, n, ans;

struct coin
{
    int v = 0, s = 0;
} c[12];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> x >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> c[i].v;
    }
    for (int i = 1; i <= x; ++i)
    {
        int cnt = 0, m = i;
        for (int j = n; j >= 1; --j)
        {
            cnt += m / c[j].v;
            if ((m / c[j].v) > c[j].s)
                c[j].s = m / c[j].v;
            m %= c[j].v;
        }
        if (cnt == 0)
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        ans += c[i].s;
    }
    cout << ans;
    return 0;
}
