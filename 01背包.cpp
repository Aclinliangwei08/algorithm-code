#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int n,m;
int v[N],w[N];
int f[N][N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=v[i])
            {
                f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
            }
        }
    }
    cout<<f[n][m]<<endl;
    //初始化
    memset(f,-0x3f,sizeof f);
    f[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=v[i])
            {
                f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
            }
        }
    }
    if(f[n][m]<0)
    cout<<0<<endl;
    else
    cout<<f[n][m]<<endl;
    return 0;
}
