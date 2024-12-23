#include <bits/stdc++.h>
using namespace std;

int T;
long n, m;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> T;
    while (T--) {
        cin >> n >> m;
        cout << 2 * n * m - n - m << "\n";
    }
    return 0;
}
