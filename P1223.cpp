#include <bits/stdc++.h>
using namespace std;

int n;
struct node {
    int id, t;
} T[1005];

bool cmp(node n1, node n2) {
    return n1.t < n2.t;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> T[i].t;
        T[i].id = i;
    }
    sort(T + 1, T + n + 1, cmp);
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (n - i) * T[i].t;
        cout << T[i].id << " ";
    }
    printf("\n%.2f", sum / double(n));
    return 0;
}
