#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp) {
            if (tmp % 10 == x) {
                cnt++;
            }
            tmp /= 10;
        }
    }
    cout << cnt;
    return 0;
}
