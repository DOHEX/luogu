#include <bits/stdc++.h>
using namespace std;

int n, T, ti, t, sum;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> T;
    for (int i = 0; i < n; ++i)
    {
        cin >> ti;
        if (t < ti)
        {
            sum += T;
        }
        else
        {
            sum += ti + T - 1 - t;
        }

        t = ti + T - 1;
    }
    cout << sum;
    return 0;
}
