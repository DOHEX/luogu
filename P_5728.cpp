#include <bits/stdc++.h>
using namespace std;

struct Student {
    int a, b, c, sum;
} s[1005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i].a >> s[i].b >> s[i].c;
        s[i].sum = s[i].a + s[i].b + s[i].c;
    }
    int ans = 0;

    for (int i = 1; i <= n - 1; ++i)
        for (int j = i + 1; j <= n; ++j)
            ans +=
                (abs(s[i].a - s[j].a) <= 5 && abs(s[i].b - s[j].b) <= 5 &&
                 abs(s[i].c - s[j].c) <= 5 && abs(s[i].sum - s[j].sum) <= 10);
    cout << ans;
    return 0;
}
