#include <bits/stdc++.h>
using namespace std;

map<string, int> m = {
    {"one", 1},        {"two", 2},       {"three", 3},     {"four", 4},
    {"five", 5},       {"six", 6},       {"seven", 7},     {"eight", 8},
    {"nine", 9},       {"ten", 10},      {"eleven", 11},   {"twelve", 12},
    {"thirteen", 13},  {"fourteen", 14}, {"fifteen", 15},  {"sixteen", 16},
    {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20},
    {"a", 1},          {"both", 2},      {"another", 1},   {"first", 1},
    {"second", 2},     {"third", 3}};

vector<int> v;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    while (cin >> s) {
        if (cin.get() == '\n')
            break;
        if (m[s]) {
            int tmp = m[s] * m[s] % 100;
            if (tmp)
                v.push_back(m[s] * m[s] % 100);
        }
    }
    if (v.empty()) {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end());
    bool flag = 1;
    for (auto i : v) {
        if (i) {
            if (i / 10 || flag)
                cout << i;
            else
                cout << 0 << i;
            flag = 0;
        }
    }
    return 0;
}
