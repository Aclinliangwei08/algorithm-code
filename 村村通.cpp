#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int fa[N];
int found(int x)
{
    return x==fa[x]?x:fa[x]=found(fa[x]);
}
int main()
{
    int n,m;
    while(cin>>n&&n)
    {
        cin>>m;
        for(int i=1;i<=n;i++)
        fa[i]=i;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            fa[found(a)]=found(b);
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i==found(i))
            ans++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}