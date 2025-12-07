#include<bits/stdc++.h>
using namespace std;
const int N=110;
int r,c;
int arr[N][N];
int f[N][N];//备忘录
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
int dfs(int x,int y)
{
    if(f[x][y])
    return f[x][y];
    int len=1;
    for(int i=0;i<4;i++)
    {
        int z=dx[i]+x;
        int k=dy[i]+y;
        if(z<1||z>r||k<1||k>c)
        continue;
        if(arr[z][k]>=arr[x][y])
        continue;
        len=max(dfs(z,k)+1,len);
    }
    return f[x][y]=len;
}
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ret=1;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            ret=max(dfs(i,j),ret);
        }
    }
    cout<<ret;
    return 0;
}