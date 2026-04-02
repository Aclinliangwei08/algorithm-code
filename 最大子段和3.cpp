#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int f[N];
int x,n;
int main()
{
    cin>>n;
    int ret=-1e9;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        f[i]=max(f[i-1]+x,x);
        ret=max(ret,f[i]);
    }
    cout<<ret<<endl;
    return 0;
}