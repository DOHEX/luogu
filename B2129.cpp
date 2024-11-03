#include <bits/stdc++.h>

int max(int a, int b, int c)
{
    return std::max(std::max(a, b), c);
}

int main()
{
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int a, b, c;
    std::cin >> a >> b >> c;
    double m = double(max(a, b, c)) / (max(a + b, b, c) * max(a, b, b + c));
    printf("%.3lf", m);
    return 0;
}
