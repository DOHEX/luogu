#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    char ch;
    int ans = 0;
    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            ans++;
    }
    cout << ans;
    return 0;
}
