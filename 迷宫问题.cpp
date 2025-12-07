#include<bits/stdc++.h>
using namespace std;
const int N=35;
char ch[N][N];
int dist[N][N];
int n,m;
int x,y;
typedef pair<int,int> PII;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void bfs()
{
    memset(dist,-1,sizeof dist);
    queue<PII> q;
    q.push({x,y});
    dist[x][y]=0;
    
    while(q.size())
    {
        auto t=q.front();
        int i=t.first,j=t.second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            if((x>=1)&&(x<=n)&&(y>=1)&&(y<=m)&&(ch[x][y]!='*')&&(dist[x][y]==-1))
            {
                dist[x][y]=dist[i][j]+1;
                if(ch[x][y]=='e')
                    continue;
                q.push({x,y});
            }
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
          scanf(" %c", &ch[i][j]);
            if(ch[i][j]=='k')
            {
                x=i;
                y=j;
            }
        }
    }
    bfs();
    int res=0,ans=1e9;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ch[i][j]=='e'&&dist[i][j]!=-1)
            {
                res++;
                ans=min(ans,dist[i][j]);
            }
        }
    }
    if(res==0)
        cout<<"-1"<<endl;
    else
        cout<<res<<" "<<ans<<endl;
    return 0;
}