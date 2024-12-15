#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h[10];

    for (int i = 0; i < 10; i++) {
        cin >> h[i];
    }
    int m, n = 0;
    cin >> m;
    m += 30;
    for (int i = 0; i < 10; i++) {
        n += h[i] <= m;
    }
    cout << n;
}