#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    cout << (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
    return 0;
}
