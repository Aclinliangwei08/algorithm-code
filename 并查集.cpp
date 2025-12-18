#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int fa[N];
int find(int x)
{
    if(fa[x]==x)
    return x;
    else
    return fa[x]=find(fa[x]);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    fa[i]=i;
    while(m--)
    {
        int z,x,y;
        cin>>z>>x>>y;
        if(z==1)
        {
            int fx=find(x);
            int fy=find(y);
            fa[fx]=fy;
        }else{
            if(find(x)==find(y))
            cout<<"Y"<<endl;
            else
            cout<<"N"<<endl;
        }
    }
    return 0;
}