#include <stdio.h>
int n, T;
char c;
char state = 3;
int main() {
    scanf("%d\n", &n);
    while (n--) {
        scanf("%c", &c);
        if (c == 'R') {
            T += (state >> 1) + (state & 1);
            state = 0;
        } else if (c == 'B') {
            T += (1 - (state >> 1)) + (state & 1);
            state = 2;
        } else if (c == 'W') {
            T += 1 - (state & 1);
            state = state | 1;
        }
    }
    printf("%d", T);

    return 0;
}
