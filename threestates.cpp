#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int n,m;
char a[N][N];
int dist[4][N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef pair<int ,int> PII;
void bfs(int num)
{
    memset(dist[num],-1,sizeof dist[num]);
    deque<PII> q;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]-'0'==num)
            {
               q.push_back({i,j});
                dist[num][i][j]=0;
            }
        }
    }
    while(q.size())
    {
        auto t=q.front();
        q.pop_back();
        int i=t.first,j=t.second;
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k],y=j+dy[k];
            if(x>=1&&x<=n&&y>=1&&y<=m&&a[x][y]!='#')
            {
                int w=(a[x][y]=='.'?1:0);
                if(dist[num][x][y]==-1)
                {
                    dist[num][x][y]=dist[num][i][j]+w;
                    if(w)
                    q.push_back({x,y});
                    else
                    q.push_front({x,y});
                }
                else if(dist[i][j]+w<dist[x][y]){
                    dist[num][x][y]=dist[num][i][j]+w;
                }
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
            cin>>a[i][j];
        }
    }
    bfs(1);bfs(2);bfs(3);
    int ret=0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='#')
            continue;
            int x=dist[1][i][j],y=dist[2][x][y],z=dist[3][x][y];

            if(x==-1||y==-1||z==-1)
            continue;
            if(a[i][j]=='.')
            ret=min(ret,x+y+z-2);
            else
            ret=min(ret,x+y+z);
        }
    }
    if(ret==0x3f3f3f3f)
    cout<<-1<<endl;
    else
    cout<<ret<<endl;
    return 0;
}