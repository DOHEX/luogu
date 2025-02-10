#include <bits/stdc++.h>
using namespace std;

void f(int n) {
    if (n == 1) {
        cout << "1";
        return;
    }
    if (n & 1)
        f(n * 3 + 1);
    else
        f(n >> 1);
    cout << " " << n;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    f(n);
    return 0;
}