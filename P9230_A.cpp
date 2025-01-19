#include <bits/stdc++.h>
using namespace std;

bool check(int x) {
    string s;
    s = to_string(x);
    int len = s.length();
    if (len % 2 == 1)
        return false;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < len / 2; i++) {
        sum1 += s[i] - '0';
        sum2 += s[i + len / 2] - '0';
    }
    return sum1 == sum2;
}

int main() {
    int cnt = 0;
    for (int i = 1; i <= 100000000; i++)
        if (check(i))
            cnt++;
    cout << cnt;
    return 0;
}
