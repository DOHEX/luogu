#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    double sum = 0;
    int n = 0;
    while (sum <= k)
    {
        n++;
        sum += 1 / double(n);
    }
    cout << n;
    return 0;
}
