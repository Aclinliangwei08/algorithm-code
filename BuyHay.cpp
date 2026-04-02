#include<bits/stdc++.h>
using namespace std;
const int N=110,M=50010;
int f[N][M];
int p[N],c[N];
int n,m;
int main()
{
    memset(f,0x3f,sizeof f);
    f[0][0]=0;

    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i]>>c[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=min(f[i-1][j],f[i][max(0,j-p[i])]+c[i]);
        }
    }
    cout<<f[n][m];
}