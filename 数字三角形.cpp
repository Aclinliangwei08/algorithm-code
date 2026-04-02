#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N][N];
int f[N][N];//从【1,1】走到【i,j】所有方案下的最大权值
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            f[i][j]=max(f[i-1][j],f[i-1][j-1])+a[i][j];
        }
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        ret=max(ret,f[n][i]);
    }
    cout<<ret<<endl;
    return 0;
}