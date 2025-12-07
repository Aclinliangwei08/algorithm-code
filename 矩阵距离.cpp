#include<bits/stdc++.h>
using namespace std;
const int N=1010;
char arr[N][N];
int n,m;
int dist[N][N];
typedef pair<int,int> PII;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void bfs()
{
    memset(dist,-1,sizeof dist);
    queue<PII> q;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='1')
            {
                dist[i][j]=0;
                q.push({i,j});
            }
        }
    }
    while(q.size())
    {
        auto t = q.front();
        q.pop();
        int k=t.first;
        int z=t.second;
        for(int i=0;i<4;i++)
        {
            int x=k+dx[i];
            int y=z+dy[i];
            if(x>=1&&x<=n&&y>=1&&y<=m&&dist[x][y]==-1)
            {
                dist[x][y]=dist[k][z]+1;
                q.push({x,y});
            }
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
            cin>>arr[i][j];
        }
    }

    bfs();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}