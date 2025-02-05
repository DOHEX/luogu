#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n;
struct node {
    int x1, y1, x2, y2;
};
stack<node> s;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    while (n--) {
        int x, y, g, k;
        cin >> x >> y >> g >> k;
        s.push({x, y, x + g, y + k});
    }
    int x, y;
    cin >> x >> y;
    while (!s.empty()) {
        node t = s.top();
        if (x >= t.x1 && x <= t.x2 && y >= t.y1 && y <= t.y2) {
            cout << s.size();
            return 0;
        }
        s.pop();
    }
    return 0;
}
