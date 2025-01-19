#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    // s:f:m
    // 时针转过的角度:30s+f/2+m/120
    // 分针转过的角度:6f+m/10
    // 秒针转过的角度:6m
    for (int s = 0; s <= 6; s++) {
        for (int f = 0; f < 60; f++) {
            for (int m = 0; m < 60; m++) {
                if (s == 0 && f == 0 && m == 0)
                    continue;
                int A = abs(3600 * s - 660 * f - 11 * m);
                A = min(A, 360 * 120 - A);
                int B = abs(720 * f - 708 * m);
                B = min(B, 360 * 120 - B);
                if (A == 2 * B)
                    cout << s << ' ' << f << ' ' << m << endl;
            }
        }
    }
    return 0;
}
