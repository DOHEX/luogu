#include <bits/stdc++.h>
using namespace std;

int l;

bool is_prime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> l;
    int cnt = 0, sum = 0;
    for (int i = 2;; i++) {
        if (is_prime(i)) {
            sum += i;
            if (sum > l)
                break;
            cnt++;
            cout << i << '\n';
        }
    }
    cout << cnt;
    return 0;
}
