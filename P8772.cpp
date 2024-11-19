#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, a[N];
long long sum, s[N];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1;i <= n;++i) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 1;i <= n - 1;++i) {
        sum += a[i] * (s[n] - s[i]);
    }
    cout << sum;
    return 0;
}
