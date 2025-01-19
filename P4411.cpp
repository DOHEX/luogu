#include <stdio.h>
int a[4], *ptr, t;
char ch;
int main() {
    ptr = a;
    for (int i = 1; i <= 3; i++)
        scanf("%d", ptr + i);
    scanf("\n");
    if (*(ptr + 2) < *(ptr + 1)) {
        t = *(ptr + 2);
        *(ptr + 2) = *(ptr + 1);
        *(ptr + 1) = t;
    }
    if (*(ptr + 3) < *(ptr + 2)) {
        t = *(ptr + 3);
        *(ptr + 3) = *(ptr + 2);
        *(ptr + 2) = t;
    }
    if (*(ptr + 2) < *(ptr + 1)) {
        t = *(ptr + 2);
        *(ptr + 2) = *(ptr + 1);
        *(ptr + 1) = t;
    }
    for (int i = 1; i <= 3; i++) {
        scanf("%c", &ch);
        printf("%d ", a[ch - 'A' + 1]);
    }
    return 0;
}