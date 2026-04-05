#include<bits/stdc++.h>
using namespace std;
const int N=1010,M=1e4+10,INF=0x3f3f3f3f;
int a[N];
int f[N][M];
int n,m=5000;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i]=x-y;
    }
    memset(f,0x3f,sizeof f);
    f[0][0+m]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=-m;j<=m;j++)
        {
            f[i][j+m]=min(f[i-1][j-a[i]+m],f[i-1][j+a[i]+m]+1);
        }
    }
    int ret=INF;
    for(int i=0;i<=m;i++)
    {
        ret=min(f[n][i+m],f[n][-i+m]);
        if(ret!=INF)
        break;
    }
    cout<<ret<<endl;
    return 0;
}