#include <bits/stdc++.h>
using namespace std;

int a, b;

bool is_prime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}
// FIXME:why wrong???
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> a >> b;
    int x;
    if (a <= 5 && 5 <= b)
        cout << 5 << "\n";
    if (a <= 7 && 7 <= b)
        cout << 7 << "\n";
    if (a <= 11 && 11 <= b)
        cout << 11 << "\n";
    for (int d1 = 1; d1 < 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            x = 100 * d1 + 10 * d2 + d1;
            if (x > b)
                return 0;
            if (x >= a && is_prime(x))
                cout << x << "\n";
        }
    }
    for (int d1 = 1; d1 <= 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            for (int d3 = 0; d3 <= 9; d3++) {
                x = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
                if (x > b)
                    return 0;
                if (x >= a && is_prime(x))
                    cout << x << "\n";
            }
        }
    }
    for (int d1 = 1; d1 <= 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            for (int d3 = 0; d3 <= 9; d3++) {
                for (int d4 = 0; d4 <= 9; d4++) {
                    x = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 +
                        100 * d3 + 10 * d2 + d1;
                    if (x > b)
                        return 0;
                    if (x >= a && is_prime(x))
                        cout << x << "\n";
                }
            }
        }
    }
    return 0;
}
