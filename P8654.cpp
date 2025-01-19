#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

int n, m, k, cnt = 0;
int pa[N];

void init() {
    for (int i = 1; i <= n * m; i++)
        pa[i] = i;
}

int find(int x) {
    if (pa[x] == x)
        return x;
    else {
        return pa[x] = find(pa[x]);
    }
}

void join(int x, int y) {
    pa[find(x)] = find(y);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    init();
    cin >> k;
    int a, b;
    for (int i = 1; i <= k; i++) {
        cin >> a >> b;
        join(a, b);
    }
    for (int i = 1; i <= n * m; i++) {
        if (pa[i] == i)
            cnt++;
    }
    cout << cnt;
    return 0;
}
