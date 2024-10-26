#include <iostream>
using namespace std;

int main()
{
    int n,w,d;
    int m =128;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w>>d;
        int n =d*7+(w-6);
        if (n<m){
            m=n;
        }
    }
    cout<<m;
    return 0;
}
