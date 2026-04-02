#include<bits/stdc++.h>
using namespace std;
const int N=25;
long long arr[N][N];
bool block[N][N];
int n,m,a,b;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={2,1,-1,-2,-2,-1,1,2};
int main()
{
    cin>>n>>m>>a>>b;
    block[a][b]=true;
    for(int i=0;i<8;i++)
    {
        int x=dx[i]+a;
        int y=dy[i]+b;
        if(x>=0&&x<=n&&y>=0&&y<=m)
        {
            block[x][y]=true;
        }
    }
    arr[0][0]=block[0][0]?0:1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(block[i][j])
            {
               continue;
            }
            if(i>0)
            arr[i][j]+=arr[i-1][j];
            if(j>0)
            arr[i][j]+=arr[i][j-1];
        }
    }
    cout<<arr[n][m]<<endl;
    return 0;
}