#include <bits/stdc++.h>
using namespace std;

void print(int x)
{
    bool flag = false;
    while (x != 0)
    {
        int t = int(log2(x));
        if (flag)
            cout << '+';
        if (t == 1)
            cout << '2';
        else if (t == 0)
            cout << "2(0)";
        else
        {
            cout << "2(";
            print(t);
            cout << ')';
        }
        x -= pow(2, t);
        flag = true;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}