#include <bits/stdc++.h>
using namespace std;

int n, d[8];
bool w[34];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= 7; i++) {
        int a;
        cin>>a;
        w[a] = 1;
    }
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= 7; j++) {
            int a;
            cin >> a;
            sum += w[a];
        }
        d[sum]++;
    }
    for (int i = 7; i >= 1; --i) {
        cout << d[i] << " ";
    }
    return 0;
}