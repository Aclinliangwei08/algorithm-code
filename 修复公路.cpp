#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int M=1e3+10;
struct node{
    int x,y,t;
};
int n,m;
node arr[N];
int fa[M];
bool cmp(node& a,node& b)
{
    return a.t<b.t;
}
int found(int i)
{
    return i==fa[i]?i:fa[i]=found(fa[i]);
}
bool check()
{
    int tmp=found(1);
    for(int i=2;i<=n;i++)
    {
        if(tmp!=found(i))
        return false;
    }
    return true;
}
void merge(int i,int j)
{
    fa[found(i)]=found(j);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i].x>>arr[i].y>>arr[i].t;
    }
    sort(arr+1,arr+1+m,cmp);
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        int x=arr[i].x;
        int y=arr[i].y;
        int t=arr[i].t;
        merge(x,y);
        if(check()){
            cout<<t<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}