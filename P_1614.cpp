#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    unsigned short ai;
    cin >> n >> m;
    int sum = 0, ans = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        cin >> ai;
        q.push(ai);
        sum += ai;
        if (i >= m) {
            ans = min(ans, sum);
            sum -= q.front();
            q.pop();
        }
    }
    if (!m) ans=0;
    cout << ans;
    return 0;
}
