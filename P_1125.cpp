#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

int cnt[26];

int main() {
    cin.tie(nullptr);
    char ch;
    while ((ch = getchar()) != '\n')
        cnt[ch - 'a']++;
    int maxn = 0, minn = INT_MAX;
    for (int i : cnt) {
        if (i) {
            maxn = max(maxn, i);
            minn = min(minn, i);
        }
    }
    if (isPrime(maxn - minn))
        cout << "Lucky Word\n" << maxn - minn;
    else
        cout << "No Answer\n" << 0;
    return 0;
}
