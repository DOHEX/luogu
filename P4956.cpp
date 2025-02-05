#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    n /= 7 * 52;
    for (int x, k = 1;; k++) {
        x = n - 3 * k;
        if (x <= 100) {
            cout << x << "\n" << k;
            return 0;
        }
    }
    return 0;
}
