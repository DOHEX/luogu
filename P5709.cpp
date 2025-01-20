#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int m, t, s;
    cin >> m >> t >> s;
    int ans = t ? m - ceil(double(s) / t) : 0;
    ans = ans > 0 ? ans : 0;
    cout << ans;
    return 0;
}
