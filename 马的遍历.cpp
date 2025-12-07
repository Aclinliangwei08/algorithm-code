#include<bits/stdc++.h>
using namespace std;
const int N=410;
int n,m,x,y;
int dist[N][N];
typedef pair<int,int> PII;
int dx[]={1,2,2,1,-1,-2,-1,-2};
int dy[]={2,1,-1,-2,-2,-1,2,1};
void bfs()
{
    memset(dist,-1,sizeof dist);
    queue<PII> q;
    dist[x][y]=0;
    q.push({x,y});

    while(q.size())
    {
        auto t=q.front();
        q.pop();
        int z=t.first,k=t.second;
        for(int i=0;i<8;i++)
        {
            int x=z+dx[i];
            int y=k+dy[i];
            if(x<1||x>n||y<1||y>m)
            continue;
            if(dist[x][y]!=-1)
            continue;
            dist[x][y]=dist[z][k]+1;
            q.push({x,y});
        }
    }
}
int main()
{
    cin>>n>>m>>x>>y;
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