#include <bits/stdc++.h>
using namespace std;

constexpr int M = 2e6 + 5;

int lst[M];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
        cin >> lst[i];
    sort(lst + 1, lst + m + 1);
    for (int i = 1; i <= m; ++i)
        cout << lst[i]<<" ";
    return 0;
}
