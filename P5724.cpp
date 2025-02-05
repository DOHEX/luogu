#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int mi = INT_MAX, ma = INT_MIN;
    for (int i = 1, tmp; i <= n; i++) {
        cin >> tmp;
        mi = min(mi, tmp);
        ma = max(ma, tmp);
    }
    cout << ma - mi;
    return 0;
}
