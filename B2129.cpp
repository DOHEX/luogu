#include <bits/stdc++.h>
using namespace std;

int mmax(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    double m = double(mmax(a, b, c)) / (mmax(a + b, b, c) * mmax(a, b, b + c));
    printf("%.3lf", m);
    return 0;
}
