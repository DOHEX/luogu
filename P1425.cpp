#include <bits/stdc++.h>
using namespace std;

int h1, m1, h2, m2, m;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> h1 >> m1 >> h2 >> m2;
    m = (h2 - h1) * 60 + (m2 - m1);
    cout << m / 60 << " " << m % 60;
    return 0;
}
