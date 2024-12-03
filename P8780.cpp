#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,n;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>a>>b>>n;
    ll sum=5*a+2*b;
    ll d=n/sum*7;
    n%=sum;
    for(int i=1;i<=5;i++){
        if(n>0) d++,n-=a;
    }
    for(int i=1;i<=2;i++){
        if(n>0)d++,n-=b;
    }
    cout<<d;
    return 0;
}
