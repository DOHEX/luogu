#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int mi = INT_MAX, ma = INT_MIN;
    int sum = 0;
    for (int i = 1, tmp; i <= n; ++i) {
        cin >> tmp;
        mi = min(mi, tmp);
        ma = max(ma, tmp);
        sum += tmp;
    }
    printf("%.2f", (float)(sum - mi - ma) / (n - 2));
    return 0;
}
