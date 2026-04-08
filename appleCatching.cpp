#include<bits/stdc++.h>
using namespace std;
const int N=1010,M=50;
int f[N][M];
int a[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            int c=0;
            if((j%2==0&&a[i]==1)||(j%2==1&&a[i]==2))
            c=1;
            f[i][j]=f[i-1][j]+c;
            if(j)
            f[i][j]=max(f[i][j],f[i-1][j-1]+c);
        }
    }
    int ret=0;
    for(int i=0;i<=m;i++)
    {
        ret=max(ret,f[n][i]);
    }
    cout<<ret<<endl;
    return 0;
}