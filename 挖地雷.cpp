#include<bits/stdc++.h>
using namespace std;
const int N=25;
int e[N][N],cnt[N],pre[N],f[N];
void dfs(int x)
{
    if(pre[x])
    dfs(pre[x]);
    cout<<x<<" ";
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>cnt[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            cin>>e[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=cnt[i];
        for(int j=1;j<i;j++)
        {
            if(e[j][i])
            {
                if(f[j]+cnt[i]>f[i])
                {
                    f[i]=f[j]+cnt[i];
                    pre[i]=j;
                }
            }
        }
    }
    int pos=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        if(f[i]>ans)
        {
            ans=f[i];
            pos=i;
        }
    }
    dfs(pos);
    cout<<endl<<ans<<endl;
    return 0;
}