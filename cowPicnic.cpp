#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int c[N];
int k,n,m;
bool st[N];
vector<int> edges[N];
int cnt[N];
void dfs(int x)
{
    st[x]=true;
    cnt[x]++;
    for(auto tmp:edges[x])
    {
        if(!st[tmp])
        {
            dfs(tmp);
        }
    }
}
int main()
{
    cin>>k>>n>>m;
    for(int i=1;i<=k;i++)
    {
        cin>>c[i];
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
    }
    for(int i=1;i<=k;i++)
    {
        memset(st,0,sizeof st);
        dfs(c[i]);
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]==k)
        {
            ret++;
        }
    }
    cout<<ret<<endl;
    return 0;
}