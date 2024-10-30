#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int i;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    while(true){
        cin>>i;
        if(i==0) break;
        s.push(i);

    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
