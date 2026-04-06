#include<bits/stdc++.h>
using namespace std;
const int N=110;
char grid[N][N];
bool st[N][N];
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void bfs(int i,int j)
{
    queue<pair<int,int>> qu;
    qu.push({i,j});
    st[i][j]=true;
    while(qu.size())
    {
        auto tmp=qu.front();
        qu.pop();
        for(int k=0;k<4;k++)
        {
            int x=tmp.first+dx[k];
            int y=tmp.second+dy[k];
            if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]!='0'&&st[x][y]==false)
            {
                st[x][y]=true;
                qu.push({x,y});
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]!='0'&&st[i][j]==false)
            {
                bfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}