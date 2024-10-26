#include <stdio.h>

int main()
{
    int h[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &h[i]);
    }
    int m, n = 0;
    scanf("%d", &m);
    m += 30;
    for (int i = 0; i < 10; i++)
    {
        n += h[i] <= m;
    }
    printf("%d", n);
}
