#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    bool isNeg = 0;
    if (n < 0) {
        isNeg = 1;
        n = -n;
    }
    int ans = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    if (isNeg)
        ans = -ans;
    cout << ans;
    return 0;
}
