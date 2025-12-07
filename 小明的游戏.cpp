//01BFS
#include<bits/stdc++.h>
using namespace std;
int n,m,t1,t2,z1,z2;
const int N=510;
char ch[N][N];
int dist[N][N];
typedef pair<int,int> PII;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void bfs()
{
    if(t1==t2 && z1==z2)
    {
        dist[t2][z2]=0;
        return;
    }
    memset(dist,-1,sizeof dist);
    deque<PII> q;//双端队列
    q.push_front({t1,z1});
    dist[t1][z1]=0;

    while(q.size())
    {
        auto t=q.front();
        q.pop_front();
        int i=t.first,j=t.second;
        if(i==t2&&j==z2)
        return;
        for(int k=0;k<4;k++)
        {
            int x=dx[k]+i;
            int y=dy[k]+j;
            if(x>=0&&x<n&&y>=0&&y<m)
            {
                char c1=ch[x][y];
                char c2=ch[i][j];
                int w=(c1==c2?0:1);
                if(dist[x][y]==-1){
                    dist[x][y]=dist[i][j]+w;
                    //01BFS
                    if(w==0)
                    q.push_front({x,y});
                    else
                    q.push_back({x,y});
                }else if(w+dist[i][j]<dist[x][y]){
                    //松弛操作
                    dist[x][y]=w+dist[i][j];
                }
            }
        }
    }
}
int main()
{
    while(cin>>n>>m,n&&m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ch[i][j];
            }
        }
        cin>>t1>>z1>>t2>>z2;
        bfs();
        cout<<dist[t2][z2]<<endl;
    }
    return 0;
}