#include <bits/stdc++.h>
using namespace std;

int l, m, u, v;
bool road[10001];

int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    cin >> l >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        for (int j = u; j <= v; j++)
        {
            road[j] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= l; i++) {
        sum += !road[i];
    }
    cout << sum;
    return 0;
}
