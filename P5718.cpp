#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m = 0x7FFFFFFF, a;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a < m)
            m = a;
    }
    cout << m;
    return 0;
}
