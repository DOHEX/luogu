#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    double ans = 0;
    if (n <= 150) {
        ans = n * 0.4463;
    } else if (n <= 400) {
        ans = 150 * 0.4463 + (n - 150) * 0.4663;
    } else {
        ans = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.1f", ans);
    return 0;
}
