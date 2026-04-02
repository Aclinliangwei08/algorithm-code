#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int sz[N];
int n,q;
int maxGang=1;
int find(int a)
{
    if(a!=parent[a])
    {
        parent[a]=find(parent[a]);
    }
    return parent[a];
}
void unite(int a,int b)
{
    int fa=find(a);
    int fb=find(b);
    if(fa!=fb)
    {
        parent[fb]=fa;
        sz[fa]+=sz[fb];
        maxGang=max(maxGang,sz[fa]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>q;
    string s;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    while(q--)
    {
        cin>>s;
        if(s=="UNION")
        {
            cin>>x>>y;
            unite(x,y);
        }else if(s=="QUERY")
        {
            cin>>x>>y;
            int fa=find(x);
            int fb=find(y);
            if(fa==fb)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }else if(s=="MAXGANG")
        cout<<maxGang<<endl;
    }
    return 0;
}