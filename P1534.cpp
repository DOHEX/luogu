#include <bits/stdc++.h>
using namespace std;

int n, a, b, yes, sum;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        yes = yes + a + b - 8;
        sum += yes;
    }
    cout << sum;
    return 0;
}
