#include <bits/stdc++.h>
using namespace std;
const int N = 5005;

int n, m, p;
int pa[N];

void init() {
    for (int i = 1; i <= n; i++)
        pa[i] = i;
}
int find(int x) {
    return pa[x] == x ? x : pa[x] = find(pa[x]);
}

void join(int x, int y) {
    pa[find(x)] = find(y);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m >> p;
    init();
    int mi, mj;
    for (int i = 1; i <= m; i++) {
        cin >> mi >> mj;
        join(mi, mj);
    }
    for (int i = 1; i <= p; i++) {
        cin >> mi >> mj;
        cout << (find(mi) == find(mj) ? "Yes" : "No") << endl;
    }
    return 0;
}
