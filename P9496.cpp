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
        cout << ((n & (n ^ m)) > 0) + (((~n) & ((n ^ m))) > 0) << "\n";
    }
    return 0;
}
