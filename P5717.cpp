#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] <= a[2])
        cout << "Not triangle";
    else {
        if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
            cout << "Right triangle";
        else if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
            cout << "Acute triangle";
        else
            cout << "Obtuse triangle";
        if (a[0] == a[1] || a[1] == a[2]) {
            cout << "\nIsosceles triangle";
            if (a[0] == a[1] && a[1] == a[2])
                cout << "\nEquilateral triangle";
        }
    }
    return 0;
}
