#include <bits/stdc++.h>
using namespace std;

int h, r;
const double pai = 3.14;
double v;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> h >> r;
    v = pai * r * r * h;
    cout << ceil(20000 / v);
    return 0;
}
