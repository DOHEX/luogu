#include <bits/stdc++.h>
#define LEN 500
using namespace std;

int a[LEN], b[LEN], c[LEN + 1];

void clear(int a[])
{
    for (int i = 0; i < LEN; ++i)
        a[i] = 0;
}

void read(int a[])
{
    string s;
    cin>>s;

    clear(a);

    int len = s.length();
    for (int i = 0; i < len; ++i)
        a[len - i - 1] = s[i] - '0';
}
void print(int a[])
{
    int i;
    for (i = LEN - 1; i >= 1; --i)
        if (a[i] != 0)
            break;
    for (; i >= 0; --i)
        putchar(a[i] + '0');
    putchar('\n');
}
void add(int a[], int b[], int c[])
{
    clear(c);
    for (int i = 0; i < LEN - 1; ++i)
    {
        c[i] += a[i] + b[i];
        if (c[i] >= 10)
        {
            c[i + 1] += 1;
            c[i] -= 10;
        }
    }
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    read(a);
    read(b);
    add(a, b, c);
    print(c);
    return 0;
}
