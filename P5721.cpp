#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            t++;
            printf("%02d", t);
        }
        putchar('\n');
    }
    return 0;
}