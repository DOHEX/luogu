#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    char a;
    int n, c, d;
    char s[100], b[10];
    cin >> n;
    while (n--) {
        cin >> b;
        if (b[0] >= 'a' && b[0] <= 'z') {
            a = b[0];
            cin >> c >> d;
        } else {
            sscanf(b, "%d", &c);
            cin >> d;
        }
        if (a == 'a')
            sprintf(s, "%d+%d=%d", c, d, c + d);
        else if (a == 'b')
            sprintf(s, "%d-%d=%d", c, d, c - d);
        else if (a == 'c')
            sprintf(s, "%d*%d=%d", c, d, c * d);
        cout << s << "\n" << strlen(s) << "\n";
    }
    return 0;
}
