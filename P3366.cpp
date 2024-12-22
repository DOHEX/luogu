#include <bits/stdc++.h>
using namespace std;

const int N=5005,M=2*1e5+5;

int n,m;
int fa[N];

struct Edge{
    int x,y,z;
}e[M];

int findroot(int x){
    return fa[x]==x?x:fa[x]=findroot(fa[x]);
}

void Merge(int x,int y){
    int xr=findroot(x),yr=findroot(y);
    fa[xr]=yr;
}

bool cmp(struct Edge e1,struct Edge e2){
    return e1.z<e2.z;
}


int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>e[i].x>>e[i].y>>e[i].z;
    }

    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    sort(e+1,e+m+1,cmp);
    
    int tot=0,ans=0;
    for(int i=1;i<=m;i++){
        int xr=findroot(e[i].x),yr=findroot(e[i].y);
        if(xr!=yr){
            Merge(xr,yr);
            tot++;
            ans+=e[i].z;
        }
        if(tot>=n-1){
            cout<<ans;
            return 0;
        }
    }
    cout<<"orz";
    return 0;
}
