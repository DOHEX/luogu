#include <bits/stdc++.h>
using namespace std;

int n = 30, ans = 0, target = 70;

void dfs(int depth, int score)
{
    if (depth > n)
        return;
    if (score == 100)
        return;
    if (score == target)
        ++ans;
    dfs(depth + 1, score + 10);
    dfs(depth + 1, 0);
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    dfs(0, 0);
    cout << ans;
    return 0;
}
