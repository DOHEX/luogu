#include <bits/stdc++.h>
using namespace std;

const int N =1e6+5;
struct node{
    int left;
    int right;
}a[N];
int n;

void front(int x){
    cout<<x<<"";
    if(a[x].left)front(a[x].left);
    if(a[x].right)front(a[x].right);
}
void mid(int x){
    if(a[x].left) mid(a[x].left);
    cout<<x<<" ";
    if(a)
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>l>>r;
    }
    return 0;
}
