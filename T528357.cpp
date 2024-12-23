#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a - b >= 0 && a + b <= n) {
        if (b == 0) {
            cout << a;
        }
        else {
            cout << a - b << " " << a + b;
        }
    }
    else if (a - b >= 0) {
        cout << a - b;
    }
    else if (a + b <= n) {
        cout << a + b;
    }
    if (a - b<0 && a + b>n) {
        cout << "No solution";
    }
    return 0;
}
