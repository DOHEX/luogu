#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, a[N];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int dep = 1, ans = 0, cnt = n, mx = 0, idx = 0;
    while (cnt)
    {
        if (idx + pow(2, dep - 1) > n)
            break;
        int t = 0;
        for (int i = 1; i <= pow(2, dep - 1); ++i)
            t += a[++idx];
        if (t > mx)
        {
            mx = t;
            ans = dep;
        }
        cnt -= pow(2, dep - 1), dep++;
    }
    if (cnt > 0)
    {
        int t = 0;
        for (; idx <= n; idx++)
            t += a[++idx];
        if (t > mx)
        {
            mx = t;
            ans = dep;
        }
    }
    cout << ans << endl;
    return 0;
}
