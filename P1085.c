#include <stdio.h>

int main()
{
    int d = 0;
    int n = 8;
    int a, b;
    for (int i = 1; i <= 7; i++)
    {
        scanf("%d%d", &a, &b);
        a += b;
        if (a > n)
        {
            n = a;
            d = i;
        }
    }
    printf("%d", d);
    return 0;
}
