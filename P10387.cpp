#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int n, cnt;
long long S, ans, s[N];

struct node {
    int p, c;
}e[N];

bool cmp(node n1, node n2) {
    return n1.c < n2.c;
}

int main() {
    cin >> n >> S;
    for (int i = 1;i <= n;++i) cin >> e[i].p >> e[i].c;
    sort(e + 1, e + 1 + n, cmp);
    for (int i = 1;i <= n;++i) s[i] = s[i - 1] + e[i].p;
    for (int i = 1;i <= n;++i) {
        if (cnt > e[i].c) continue;
        else {
            int x = e[i].c - cnt;
            if (s[n] - s[i - 1] >= S) {
                ans += S * x;
                cnt += x;
            }
            else ans += e[i].p * x;

        }
    }
    cout << ans;
    return 0;
}
