#include <bits/stdc++.h>
using namespace std;

int sum, have, cost;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    for (int m = 1; m <= 12; m++)
    {
        cin >> cost;
        have += 300;
        if (have < cost)
        {
            cout << -m;
            return 0;
        }
        else
        {
            have -= cost;
            sum += have / 100 * 100;
            have = have % 100;
        }
    }
    cout << sum * 1.2 + have;
    return 0;
}
