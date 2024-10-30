#include <bits/stdc++.h>
using namespace std;

int n,k;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n>>k;
    cout<<k-n%k;
    return 0;
}
