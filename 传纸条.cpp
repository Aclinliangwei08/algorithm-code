#include<bits/stdc++.h>
using namespace std;
const int N=110;
int a[N][N];
int f[N][N][N];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int s=2;s<=n+m;s++)
    {
        for(int i1=1;i1<=m;i1++)
        {
            for(int i2=1;i2<=m;i2++)
            {
                if(i1==i2 && s!=(n+m))
                continue;
                int j1=s-i1;
                int j2=s-i2;
                if(j1<1 ||j1>n || j2<1||j2>n)
                {
                    continue;
                }
                int& t =f[s][i1][i2];
                t=max(t,f[s-1][i1-1][i2-1]);
                t=max(t,f[s-1][i1][i2-1]);
                t=max(t,f[s-1][i1-1][i2]);
                t=max(t,f[s-1][i1][i2]);
                t+=a[i1][j1]+a[i2][j2];
            }
        }
    }
    cout<<f[n+m][m][m]<<endl;
    return 0;
}