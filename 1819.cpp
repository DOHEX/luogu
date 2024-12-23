#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
long long h, n, a[N], s[N];

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> h;

    for (int i = 1; i <= n; ++i) {
        int li, hi;
        cin >> li >> hi;
        li++;
        hi++;
        a[li] += 1;
        a[hi + 1] -= 1;
    }
    for (int i = 1; i <= n; ++i)
        a[i] += a[i - 1];

    for (int i = 1; i <= n; ++i)
        s[i] = s[i - 1] + a[i];

    long long ans = 1e18;
    for (int i = h; i <= n; ++i)
        ans = min(ans, n * h - (s[i] - s[i - h]));

    cout << ans;
    return 0;
}
