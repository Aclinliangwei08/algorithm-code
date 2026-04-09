#include<bits/stdc++.h>
using namespace std;
//贪心+并查集
const int N=1e4+10,M=2e4+10;
typedef long long LL;
LL n,m,s,t;
struct node{
    int u,v,w;
}a[M];
int fa[N]; //并查集数组
bool cmp(node& x,node& y)
{
    return x.w<y.w;
}
int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void un(int x,int y)
{
    fa[find(x)]=find(y);
}
int main()
{
    cin>>n>>m>>s>>t;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].u>>a[i].v>>a[i].w;
    }
    sort(a+1,a+1+m,cmp);
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    int ret=a[m].w;
    for(int i=1;i<=m;i++)
    {
        int u=a[i].u,v=a[i].v,w=a[i].w;
        un(u,v);
        ret=w;
        if(find(s)==find(t))
        break;
    }
    cout<<ret<<endl;
    return 0;
}