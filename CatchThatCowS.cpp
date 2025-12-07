#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dist[N];
int x,y;
int n=1e5;
void bfs()
{
    dist[x]=0;
    queue<int> q;
    q.push(x);
    while(q.size())
    {
        auto t=q.front();
        q.pop();
        int a=t+1,b=t-1,c=t*2;
        if(a<=n&&dist[a]==-1)
        {
            dist[a]=dist[t]+1;
            q.push(a);
        }
        if(b>0&&dist[b]==-1)
        {
            dist[b]=dist[t]+1;
            q.push(b);
        }
        if(c<=n&&dist[c]==-1)
        {
            dist[c]=dist[t]+1;
            q.push(c);
        }
        if(c==y||a==y||b==y)
        return ;
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(dist,-1,sizeof dist);
        cin>>x>>y;
        bfs();
        cout<<dist[y]<<endl;
    }
    return 0;
}