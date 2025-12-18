#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int n,m;
int fa[N*2];
int find(int x)
{
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void un(int x,int y)
{
    fa[find(y)]=find(x);
}
int main()
{
    cin>>n>>m;
    char ch;
    int p,q;
    for(int i=1;i<=2*n;i++)
    fa[i]=i;
    while(m--)
    {
        cin>>ch>>p>>q;
        if(ch=='E')//敌人
        {
            un(p,q+n);
            un(q,p+n);
        }else{
            un(p,q);
        }
    }
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        if(fa[i]==i)
        ret++;
    }
    cout<<ret<<endl;
    return 0;
}