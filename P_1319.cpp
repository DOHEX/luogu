#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int cnt = 0;
    bool flag = 0;
    while (true) {
        int a;
        cin >> a;
        for (int i = 1; i <= a; ++i) {
            cout << (int)flag;
            cnt++;
            if (cnt == n * n)
                return 0;
            if (cnt % n == 0)
                cout << "\n";
        }
        flag=!flag;
    }
    return 0;
}
