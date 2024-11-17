#include <bits/stdc++.h>
using namespace std;

int n;

struct node
{
    int id;
    string s;
} e[30];

bool cmp(node n1, node n2)
{
    if (n1.s.size() == n2.s.size())
        return n1.s > n2.s;
    return n1.s.size() > n2.s.size();
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> e[i].s;
        e[i].id = i;
    }
    sort(e + 1, e + 1 + n, cmp);
    cout << e[1].id << "\n";
    cout << e[1].s;
    return 0;
}
