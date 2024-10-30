#include <stdio.h>
int n, t;
char c;
char state = 3;
int main()
{
    scanf("%d\n", &n);
    while (n--)
    {
        scanf("%c", &c);
        if (c == 'R')
        {
            t += (state >> 1) + (state & 1);
            state = 0;
        }
        else if (c == 'B')
        {
            t += (1 - (state >> 1)) + (state & 1);
            state = 2;
        }
        else if (c == 'W')
        {
            t += 1 - (state & 1);
            state = state | 1;
        }
    }
    printf("%d", t);

    return 0;
}
