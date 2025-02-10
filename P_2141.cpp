#include <bits/stdc++.h>
using namespace std;

int a[105];
bool b[20005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[a[i]] = 1;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (b[a[i] + a[j]]) {
                ++ans;
                b[a[i] + a[j]] = 0;
            }
    cout << ans;
    return 0;
}
