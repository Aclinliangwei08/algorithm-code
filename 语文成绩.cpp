#include<bits/stdc++.h>
using namespace std;
const int N=5e6+10;
typedef long long LL;
LL f[N];
LL n,p;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
    }
    for(int i=n;i>=1;i--)
    {
        f[i]-=f[i-1];
    }
    int x,y,z;
    while(p--)
    {
        cin>>x>>y>>z;
        f[x]+=z;
        f[y+1]-=z;
    }
    LL ret=0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
        f[i]+=f[i-1];
        ret=min(ret,f[i]);
    }
    cout<<ret<<endl;
    return 0;
}