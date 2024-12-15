#include <bits/stdc++.h>
using namespace std;

const double pai = 3.14;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int h, r;
    cin >> h >> r;
    double v = pai * r * r * h;
    cout << ceil(20000 / v);
    return 0;
}
