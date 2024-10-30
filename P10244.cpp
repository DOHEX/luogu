#include <bits/stdc++.h>
using namespace std;

int n;
string a, b, c, d;
char tmp;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    cin >> a >> b >> c >> d;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > c[i])
        {
            swap(a[i], c[i]);
            swap(b[i], d[i]);
        }
        else if (a[i] == c[i])
            if (b[i] > d[i])
                swap(b[i], d[i]);
    }
    cout << b;
    return 0;
}
