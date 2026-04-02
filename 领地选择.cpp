#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
typedef long long LL;
LL f[N][N];
int main()
{
    int n,m,c;
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>f[i][j];
            f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+f[i][j];
        }
    }

    LL sum=-1e18;
    int x,y;
    for(int i=1;i<=n-c+1;i++)
    {
        for(int j=1;j<=m-c+1;j++)
        {
            int x2=i+c-1;
            int y2=j+c-1;
            LL tmp=f[x2][y2]-f[i-1][y2]-f[x2][j-1]+f[i-1][j-1];
            if(tmp>sum)
            {
                sum=tmp;
                x=i;
                y=j;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}