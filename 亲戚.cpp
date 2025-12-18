#include<bits/stdc++.h>
using namespace std;
int n,m,p;
const int N=5010;
int fa[N];
int find(int x)
{
    if(x==fa[x])
    return x;
    else
    return fa[x]=find(fa[x]);
}
int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
    fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        int m1,m2;
        cin>>m1>>m2;
        int fa1=find(m1);
        int fa2=find(m2);
        fa[fa1]=fa2;
    }
    for(int i=1;i<=p;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        if(find(p1)==find(p2))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}