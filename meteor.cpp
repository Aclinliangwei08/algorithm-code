#include<bits/stdc++.h>
using namespace std;
const int N=310,INF=0x3f3f3f3f;
int t[N][N];
int dist[N][N];
int m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int bfs()
{
    if(t[0][0]==INF)
    return 0;
    memset(dist,0x3f,sizeof dist);
    dist[0][0]=0;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(q.size())
    {
        auto tmp =q.front();
        q.pop();
        int i=tmp.first,j=tmp.second;
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            if(x<0||y<0)
            continue;
            if(dist[x][y]!=INF)
            continue;
            if(dist[i][j]+1>=t[x][y])
            continue;
            dist[x][y]=dist[i][j]+1;
            if(t[x][y]==INF)
            return dist[x][y];
            q.push({x,y});
        }
    }
    return -1;
}

int main()
{
    cin>>m;
    memset(t,0x3f,sizeof t);
    int x,y,z;
    while(m--)
    {
        cin>>x>>y>>z;
        t[x][y]=min(t[x][y],z);
        for(int k=0;k<4;k++)
        {
            int i=x+dx[k];
            int j=y+dy[k];
            if(i<0||j<0)
            continue;
            t[i][j]=min(t[i][j],z);
        }
    }
    cout<<bfs()<<endl;
    return 0;
}