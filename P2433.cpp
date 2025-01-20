#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14 / 4 << "\n" << 14 / 4 * 4 << "\n" << 14 % 4;
    } else if (T == 4) {
        cout << 500.0 / 3;
    } else if (T == 5) {
        cout << (260 + 220) / (12 + 20);
    } else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9);
    } else if (T == 7) {
        cout << "110\n90\n0";
    } else if (T == 8) {
        const float pi = 3.141593;
        const int r = 5;
        cout << 2 * pi * r << "\n"
             << pi * r * r << "\n"
             << 4.0 / 3 * pi * r * r * r;
    } else if (T == 9) {
        int ans = 1;
        for (int i = 1; i <= 3; i++)
            ans = (ans + 1) * 2;
        cout << ans;
    } else if (T == 10) {
        cout << 9;
    } else if (T == 11) {
        cout << 100 / 3.0;
    } else if (T == 12) {
        cout << "13\nR";
    } else if (T == 13) {
        const float pi = 3.141593;
        int r1 = 4, r2 = 10;
        float v1 = 4.0 / 3 * pi * r1 * r1 * r1;
        float v2 = 4.0 / 3 * pi * r2 * r2 * r2;
        cout << int(pow(v1 + v2, 1.0 / 3));
    } else if (T == 14) {
        float a = 1, b = -120, c = 3500;
        float delta = b * b - 4 * a * c;
        cout << round((-b - sqrt(delta)) / (2 * a));
    }
    return 0;
}
