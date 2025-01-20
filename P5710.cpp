#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int x;
    cin >> x;
    int a = !(x & 1) + (4 < x && x <= 12);
    cout << (a == 2) << " " << (a >= 1) << " " << (a == 1) << " " << (a == 0);
    return 0;
}
