#include <bits/stdc++.h>
using namespace std;

int k, s1, s2, s3;
bool flag;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(0);

    cin >> k;
    for (int i = 10000; i <= 30000; i++) {
        s1 = i / 100;
        s2 = i % 10000 / 10;
        s3 = i % 1000;
        if (s1 % k == 0 && s2 % k == 0 && s3 % k == 0) {
            flag = 1;
            cout << i << "\n";
        }
    }
    if (!flag) cout << "No";
    return 0;
}
