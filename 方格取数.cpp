#include<bits/stdc++.h>
using namespace std;
const int N=15;
int f[N*2][N][N];
int a[N][N];
int n;
int main()
{
    cin>>n;
    int x,y,w;
    while(cin>>x>>y>>w,x)
    {
        a[x][y]=w;
    }
    for(int s=2;s<=n+n;s++)
    {
        for(int i1=1;i1<=n;i1++)
        {
            for(int i2=1;i2<=n;i2++)
            {
                int j1=s-i1,j2=s-i2;
                if(j1<=0 || j1>n || j2<=0 || j2>n)
                continue;
                int t=f[s-1][i1][i2];
                t=max(t,f[s-1][i1-1][i2-1]);
                t=max(t,f[s-1][i1-1][i2]);
                t=max(t,f[s-1][i1][i2-1]);
                if(i1==i2)
                {
                    f[s][i1][i2]=t+a[i1][j1];
                }else{
                    f[s][i1][i2]=t+a[i1][j1]+a[i2][j2];
                }
            }
        }
    }
    cout<<f[n+n][n][n]<<endl;
    return 0;
}