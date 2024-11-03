#include <bits/stdc++.h>
using namespace std;

int m(int n){
    if (n ==1) return 1;
    else return n*m(n-1);
}

int main()
{
    
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin>>n;
    
    cout<<m(n);
    return 0;
}
