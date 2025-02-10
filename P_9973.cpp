#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    getline(cin,s);
    cout << ((s.substr(0, 19).compare("You are right, but ")) ? "Human" : "AI");
    return 0;
}
