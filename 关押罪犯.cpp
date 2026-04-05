#include<bits/stdc++.h>
using namespace std;
const int N=4e4+10,M=1e5+10;
int fa[N];
struct node{
    int a,b,c;
}arr[M];
int n,m;
bool cmp(node& x,node& y)
{
    return x.c>y.c;
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
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i].a>>arr[i].b>>arr[i].c;
    }
    sort(arr+1,arr+1+m,cmp);
    //初始化
    for(int i=1;i<=n*2;i++)
    fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        int a=arr[i].a,b=arr[i].b,c=arr[i].c;
        un(a,b+n);
        un(b,a+n);
        if(find(a)==find(b))
        {
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}