#include <bits/stdc++.h>
using namespace std;

int t[11], n;

int lowbit(int x) {
    return x & -x;
}

void add(int x) {
    for (; x <= 11; x += lowbit(x))
        t[x]++;
}
int getsum(int x) {
    int ans = 0;
    for (; x; x -= lowbit(x))
        ans += t[x];
    return ans;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        add(a + 1);
        cout << getsum(a) << " ";
    }
    return 0;
}