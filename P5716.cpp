#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int y, m;
    cin >> y >> m;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        days[2] = 29;
    cout << days[m];
    return 0;
}
