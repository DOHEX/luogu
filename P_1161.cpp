#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        double a;
        int t;
        cin >> a >> t;
        for (int i = 0; i <= t; ++i)
            ans ^= int(i * a);
    }
    cout<<ans;
    return 0;
}
