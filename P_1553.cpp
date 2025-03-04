#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    int zeroCount = 0;
    reverse(s.begin(), s.end());
    for (auto i : s)
        if (i == 48)
            ++zeroCount;
        else
            break;
    s.erase(s.begin(), s.begin() + zeroCount);
    return (s != "" ? s : "0");
}

string deleteTail(string s) {
    int zeroCount = 0;
    for (int i = s.size() - 1; i >= 0; --i)
        if (s[i] == 48)
            ++zeroCount;
        else
            break;
    s.erase(s.end() - zeroCount, s.end());
    return (s != "" ? s : "0");
}

int main() {
    string s;
    cin >> s;
    if (s.back() == '%') {
        cout << reverse(s.substr(0, s.size() - 1)) << "%" << endl;
        return 0;
    }
    for (auto i : s) {
        string left, right;
        if (i == '/') {
            left = s.substr(0, s.find("/"));
            right = s.substr(s.find("/") + 1);
            cout << reverse(left) << "/" << reverse(right) << endl;
            return 0;
        }
        if (i == '.') {
            left = s.substr(0, s.find("."));
            right = s.substr(s.find(".") + 1);
            cout << reverse(left) << "." << deleteTail(reverse(right)) << endl;
            return 0;
        }
    }
    cout << reverse(s) << endl;
    return 0;
}