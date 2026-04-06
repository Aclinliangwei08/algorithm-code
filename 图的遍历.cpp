#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+10;
vector<int> edges[N];
int ans[N];

void dfs(int x,int val)
{
   ans[x]=val;
   for(auto tmp:edges[x])
   {
        if(!ans[tmp])
        {
            dfs(tmp,val);
        }
   }
}

int main()
{
    cin>>n>>m;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        edges[y].push_back(x);//反向建图
    }
    for(int i=n;i>=1;i--)
    {
        if(!ans[i]){
            dfs(i,i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}