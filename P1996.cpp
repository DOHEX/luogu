#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    cin >> n >> m;
    queue<int> Q;
    for (int i = 1; i <= n; ++i)
    {
        Q.push(i);
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < m; ++j)
        {
            int f = Q.front();
            Q.pop();
            Q.push(f);
        }
        cout << Q.front() << " ";
        Q.pop();
    }
    return 0;
}
