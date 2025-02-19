#include <bits/stdc++.h>
using namespace std;

int n;

char a[12][12], b[12][12];

bool t1() {
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] != b[j][n - i + 1])
                return false;
    return true;
}
bool t2() {
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] != b[n - i + 1][n - j + 1])
                return false;
    return true;
}
bool t3() {
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] != b[n - j + 1][i])
                return false;
    return true;
}
bool t4() {
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] != b[i][n - j + 1])
                return false;
    return true;
}
bool t5() {
    char c[12][12];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            c[i][j] = a[i][n - j + 1];
    swap(a, c);
    bool ans = t1() || t2() || t3();
    swap(a, c);
    return ans;
}
bool t6() {
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] != b[i][j])
                return false;
    return true;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i] + 1;
    for (int i = 1; i <= n; ++i)
        cin >> b[i] + 1;
    if (t1())
        cout << 1;
    else if (t2())
        cout << 2;
    else if (t3())
        cout << 3;
    else if (t4())
        cout << 4;
    else if (t5())
        cout << 5;
    else if (t6())
        cout << 6;
    else
        cout << 7;
    return 0;
}
