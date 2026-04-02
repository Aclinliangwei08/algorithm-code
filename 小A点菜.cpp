#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=10010;
int f[N][N];
int a[N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //初始化
    f[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if(j>=a[i])
            {
                f[i][j]+=f[i-1][j-a[i]];
            }
        }
    }
    cout<<f[n][m]<<endl;
    return 0;
}