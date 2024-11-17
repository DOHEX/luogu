#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int t[N], n, input, d = 1, ansd = 0;
long long wmax = 0;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        long long sum = 0;
        for (int j = 1; j <= pow(2, d - 1) && i <= n; ++j)
        {
            cin >> input;
            sum += input;
            ++i;
        }
        if (sum > wmax)
        {
            wmax = sum;
            ansd = d;
        }
        ++d;
    }
    cout << ansd;
    return 0;
}
