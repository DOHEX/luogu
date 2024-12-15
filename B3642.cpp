#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int n;
struct node {
    int l, r;
} a[N];

void front(int x)
{
    cout << x << ' ';
    if (a[x].l)
        front(a[x].l);
    if (a[x].r)
        front(a[x].r);
}

void mid(int x)
{
    if (a[x].l)
        mid(a[x].l);
    cout << x << ' ';
    if (a[x].r)
        mid(a[x].r);
}

void back(int x)
{
    if (a[x].l)
        back(a[x].l);
    if (a[x].r)
        back(a[x].r);
    cout << x << ' ';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].l >> a[i].r;
    }

    front(1);
    cout << '\n';
    mid(1);
    cout << '\n';
    back(1);
    return 0;
}
