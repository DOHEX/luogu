#include <bits/stdc++.h>
using namespace std;

double a, b, c, p;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
