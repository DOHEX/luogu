#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int a, b;
    int ans = 0x7fffffff;
    for (int i = 1; i <= 3; i++) {
        cin >> a >> b;
        ans = min(ans, (n + a - 1) / a * b);
    }
    cout << ans;
    return 0;
}
