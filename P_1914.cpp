#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr);
    int n;
    cin >> n;
    getchar();
    char ch;
    while ((ch = getchar()) != EOF) {
        ch = (ch - 'a' + n) % 26 + 'a';
        putchar(ch);
    }
    return 0;
}
