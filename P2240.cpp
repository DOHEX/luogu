#include <bits/stdc++.h>
using namespace std;

struct coin{
    int m,v;
    double a;
}c[105];
int n,t;

bool cmp(coin c1,coin c2){
    return c1.a>c2.a;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n>>t;
    for(int i=1;i<=n;++i){
        cin>>c[i].m>>c[i].v;
        c[i].a=(double)c[i].v/c[i].m;
    }
    sort(c+1,c+1+n,cmp);
    double ans=0;
    for(int i=1;i<=n;++i){
        if(c[i].m<=t){
            ans+=c[i].v;
            t-=c[i].m;
        }
        else{
            ans+=c[i].a*t;
            break;
        }
    }
    printf("%.2lf",ans);

    return 0;
}
