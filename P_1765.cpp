#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    char ch;
    int ans = 0;
    while ((ch = getchar()) != '\n') {
        if (ch == ' ')
            ans++;
        else if (ch <= 'c')
            ans += ch - 'a' + 1;
        else if (ch <= 'f')
            ans += ch - 'd' + 1;
        else if (ch <= 'i')
            ans += ch - 'g' + 1;
        else if (ch <= 'l')
            ans += ch - 'j' + 1;
        else if (ch <= 'o')
            ans += ch - 'm' + 1;
        else if (ch <= 's')
            ans += ch - 'p' + 1;
        else if (ch <= 'v')
            ans += ch - 't' + 1;
        else if (ch <= 'z')
            ans += ch - 'w' + 1;
    }
    cout << ans;
    return 0;
}
