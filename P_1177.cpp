#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1e5 + 5;

int lst[N];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> lst[i];
    sort(lst + 1, lst + n + 1);
    for (int i = 1; i <= n; ++i)
        cout << lst[i] << " ";
    return 0;
}
