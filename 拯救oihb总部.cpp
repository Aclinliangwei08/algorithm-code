#include<bits/stdc++.h>
using namespace std;
const int N=510;
char grid[N][N];
bool visited[N][N];
int x,y;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void bfs(int a,int b)
{
    queue<pair<int,int>> qu;
    qu.push({a,b});
    visited[a][b]=true;
    while(qu.size())
    {
        auto [i,j]=qu.front();
        qu.pop();
        for(int k=0;k<4;k++)
        {
            int wx=dx[k]+i;
            int wy=dy[k]+j;
            if(grid[wx][wy]=='0'&&!visited[wx][wy]&&wx>=1&&wx<=x&&wy>=1&&wy<=y)
            {
                visited[wx][wy]=true;
                qu.push({wx,wy});
            }
        }
    }
}
int main()
{
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=1;i<=x;i++)
    {
        if(!visited[i][1]&&grid[i][1]=='0')
        bfs(i,1);
         if(!visited[i][y]&&grid[i][y]=='0')
        bfs(i,y);
    }
    for(int i=1;i<=y;i++)
    {
        if(!visited[1][i]&&grid[1][i]=='0')
        bfs(1,i);
         if(!visited[x][i]&&grid[x][i]=='0')
        bfs(x,i);
    }
    int ret=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(grid[i][j]=='0'&&!visited[i][j])
            ret++;
        }
    }
    cout<<ret<<endl;
    return 0;
}