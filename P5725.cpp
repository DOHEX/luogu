#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n * n; i++) {
        printf("%02d", i);
        if (i % n == 0)
            putchar('\n');
    }
    putchar('\n');
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int j = 1; j <= i; j++) {
            printf("%02d", cnt);
            cnt++;
        }
        putchar('\n');
    }
    return 0;
}
