#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i * i % n < float(n) / 2)
        {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
