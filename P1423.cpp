#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    float s;
    cin>>s;
    cout<<ceil(log(1-s/100)/log(0.98));
    return 0;
}
