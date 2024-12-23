#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[10005];
    int p;
    bool flag = 1;
    for (int i = 1;i <= 2 * n;i++) {
        cin >> p;
        if (p == i) {
            flag = 0;
        }
        m[i] = p;
    }
    for (int i = 1;i <= 2 * n;i++) {
        if (m[m[i]] != i) {
            flag = 0;
        }
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}
