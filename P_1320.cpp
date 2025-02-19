#include <bits/stdc++.h> //luogu福利
using namespace std;

char a, b = '0';
int n, ans[1000001], zz = 1;
int cnt=0;
int main() {
    while (cin >> a) {
        n++;
        if (a == b)
            ans[zz]++;
        else
            ans[++zz]++, b = a;
    }
    cout << sqrt(n);
    for (int i = 1; i <= zz; i++)
        cout << " " << ans[i];
}