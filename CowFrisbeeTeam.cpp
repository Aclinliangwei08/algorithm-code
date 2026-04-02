#include<bits/stdc++.h>
using namespace std;
const int N=2010,M=1010,MOD=1e8;
int a[N];
int f[N][M];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    f[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            f[i][j]=(f[i-1][j]+f[i-1][((j-a[i]%m)%m+m)%m])%MOD;
        }
    }
    cout<<f[n][0]-1<<endl;
    return 0;
}