#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 2; i * i < n; ++i) {
        if (n % i == 0) {
            cout << n / i;
            return 0;
        }
    }
    return 0;
}
