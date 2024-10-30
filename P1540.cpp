#include <bits/stdc++.h>
using namespace std;

int m, n, ans;
bool v[1005];
queue<int> D;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> m >> n;
    queue<int> D;
    int w;
    for (int i = 1; i <= n; ++i)
    {
        cin >> w;
        if (v[w])
            continue;
        else
        {
            if (D.size() >= m)
            {
                v[D.front()] = 0;
                D.pop();
            }
            D.push(w);
            v[w] = 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
