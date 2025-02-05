#include <bits/stdc++.h>
using namespace std;

int k;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> k;
    long long ans = 0;
    for (int i = 1, j = 1, cnt = 0; i <= k; i++) {
        ans += j;
        cnt++;
        if (cnt == j) {
            j++;
            cnt = 0;
        }
    }
    cout << ans;
    // int n,d;
    // cin>>d;
    // n=(sqrt(1+(d<<3))-1)/2;
    // cout<<n*(d*1.0-(n+1)*(n+2)/6.0)+d;
    return 0;
}
