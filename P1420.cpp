#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int pre = -1, cur, len = 1, ans = 1;
    for (int i = 1; i <= n; i++) {
        cin >> cur;
        if (cur == pre + 1)
            len++;
        else {
            ans = max(ans, len);
            len = 1;
        }
        pre = cur;
    }
    ans = max(ans, len);
    cout << ans;
    return 0;
}
