#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int t[N],x[N],y[N],f[N];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>t[i]>>x[i]>>y[i];
    }
    int ans=0;
    for(int i=1;i<=m;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
        {
            if(t[i]-t[j]>=abs(x[i]-x[j])+abs((y[i]-y[j])))
            {
                f[i]=max(f[i],f[j]+1);
            }
        }
        ans=max(ans,f[i]);
    }
    cout<<ans<<endl;
    return 0;
}