#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int fa[N];
int n,m;
int found(int x)
{
    return x==fa[x]?x:fa[x]=found(fa[x]);
}
int main()
{
    while(cin>>n&&n)
    {
        cin>>m;
        for(int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
        int x,y;
        while(m--)
        {
            cin>>x>>y;
            fa[found(x)]=found(y);
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(fa[i]==i)
            ans++;
        }
        cout<<ans-1<<endl;
    }
}