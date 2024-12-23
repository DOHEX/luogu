#include <iostream>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (l; l <= r; l++) {
        string s = to_string(l);
        for (char ch : s) {
            if (ch == '2') {
                sum += 1;
            }
        }
    }
    cout << sum;
    return 0;
}
