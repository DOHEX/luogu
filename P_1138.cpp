#include <bits/stdc++.h>
using namespace std;

short lst[10005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> lst[i];
    }
    sort(lst + 1, lst + n + 1);
    int cnt = 1;
    for (int i = 2; i <= n; ++i) {
        if (lst[i - 1] < lst[i])
            cnt++;
        if (cnt == k) {
            cout << lst[i];
            return 0;
        }
    }
    cout << "NO RESULT";
    return 0;
}
