#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, m, tmp, l, r, s[N];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1;i <= n;++i) {
        cin >> tmp;
        s[i] = s[i - 1] + tmp;
    }
    cin >> m;
    while (m--) {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << "\n";
    }
    return 0;
}
