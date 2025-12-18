//dfs
#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m;
char ch[N][N];
bool st[N][N];
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,1,-1};
void dfs(int i,int j)
{
    st[i][j]=true;
    for(int k=0;k<8;k++)
    {
        int x=dx[k]+i;
        int y=dy[k]+j;
        if(ch[x][y]=='W'&&st[x][y]==false)
        {
            dfs(x,y);
        }
    }

}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ch[i][j]=='W'&&st[i][j]==false)
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}