#include <bits/stdc++.h>
using namespace std;

int n, k, sum;

int main() {
    scanf("%d%d", &n, &k);
    int N = n / k;
    sum = (k + N * k) * N / 2;
    printf("%.1f ", float(sum) / N);
    sum = (1 + n) * n / 2 - sum;
    printf("%.1f\n", float(sum) / (n - N));
    return 0;
}