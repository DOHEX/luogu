#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int d = 0;
    int n = 8;
    int a, b;
    for (int i = 1; i <= 7; i++) {
        cin >> a >> b;
        a += b;
        if (a > n) {
            n = a;
            d = i;
        }
    }
    cout << d;
    return 0;
}