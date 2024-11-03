#include <bits/stdc++.h>
using namespace std;

int s, v;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> s >> v;
    int t = ceil(double(s) / v) + 10;
    int h = 7 - t / 60, m = 60 - t % 60;
    if (h < 0)
    {
        h += 24;
    }
    printf("%02d:%02d", h, m);
    return 0;
}
