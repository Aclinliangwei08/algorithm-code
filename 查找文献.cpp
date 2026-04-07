#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+10;
vector<int> edges[N];
bool st[N];

void dfs(int x)
{
    st[x]=true;
    cout<<x<<" ";
    for(auto tmp:edges[x])
    {
        if(!st[tmp])
        dfs(tmp);
    }
}
vector<int> ans;
void bfs()
{
    memset(st,0,sizeof st);
    queue<int> q;
    q.push(1);
    st[1]=true;
    while(q.size())
    {
        int tmp=q.front();q.pop();
        ans.push_back(tmp);
        st[tmp]=true;
        for(auto z:edges[tmp])
        {
            if(!st[z])
            {
                st[z]=true;
                q.push(z);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        sort(edges[i].begin(),edges[i].end());
    }
    //dfs
    dfs(1);
    cout<<endl;
    bfs();
    for(auto tmp:ans)
    {
        cout<<tmp<<" ";
    }
    return 0;
}