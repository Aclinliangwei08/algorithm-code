#include<bits/stdc++.h>
using namespace std;
const int N=1510;
typedef pair<int,int> PII;
vector<PII> edges[N];
int n,m;
int in[N];
int f[N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges[u].push_back({v,w});
        in[v]++;
    }
    queue<int> q;
    //先处理入度为0，但是不是1号结点的节点
    for(int i=2;i<=n;i++)
    {
        if(in[i]==0)
        q.push(i);
        f[i]=-1e9;
    }
    while(q.size())
    {
        auto z=q.front();
        q.pop();
        for(auto& t:edges[z])
        {
            int v=t.first;
            in[v]--;
            if(in[v]==0)
            q.push(v);
        }
    }
    q.push(1);
     while(q.size())
    {
        auto z=q.front();
        q.pop();
        for(auto& t:edges[z])
        {
            int v=t.first,w=t.second;
            f[v]=max(f[v],w+f[z]);
            in[v]--;
            if(in[v]==0)
            q.push(v);
        }
    }
    if(f[n]==-1e9)
    cout<<-1<<endl;
    else
    cout<<f[n]<<endl;
    return 0;
}