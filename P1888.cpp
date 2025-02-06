#include <bits/stdc++.h>
using namespace std;
// LEARN: 欧几里得辗转相除法求最大公约数
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int g = gcd(a[0], a[2]);
    cout << a[0] / g << "/" << a[2] / g;
    return 0;
}
