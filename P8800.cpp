#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;

ll n, m;
ll a[N], b[N];

bool check(ll mid)
{
    ll cnt = m;
    for (int i = 1; i <= n; i++)
    {
        if (cnt - (mid - a[i]) >= 0 && a[i] + b[i] >= mid)
        {
            cnt -= max(mid - a[i], 0ll);
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
    ll l = 0, r = n * 2, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << l - 1;
    return 0;
}
