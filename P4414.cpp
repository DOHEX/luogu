#include <bits/stdc++.h>
using namespace std;

int a[3];
char A, B, C;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> a[0] >> a[1] >> a[2];
    cin >> A >> B >> C;
    sort(a, a + 3);
    cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];
    return 0;
}