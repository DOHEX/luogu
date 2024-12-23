#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = n;
    while (n >= k) {
        sum += n / k;
        n = n % k + n / k;
    }
    cout << sum;
    return 0;
}
