#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//解题思路：离散化+并查集
//离散化
int pos;
int disc[N*2];
unordered_map<int,int> mp;

//并查集
int fa[N*2];
struct node{
    int x,y,z;
}a[N];
int n;

int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}

int un(int x,int y)
{
    return fa[find(x)]=find(y);
}

bool issame(int x,int y)
{
    return find(x)==find(y);
}
bool solve()
{
    cin>>n;
    pos=0;
    mp.clear();

    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y>>a[i].z;
        disc[++pos]=a[i].x;
        disc[++pos]=a[i].y;
    }
    //离散化
    sort(disc+1,disc+1+pos);
    int cnt=0;
    for(int i=1;i<=pos;i++)
    {
        int x=disc[i];
        if(mp.count(x))
        continue;

        cnt++;
        mp[x]=cnt;
    }

    //初始化
    for(int i=1;i<=cnt;i++)
    {
        fa[i]=i;
    }

    for(int i=1;i<=n;i++)
    {
        int x=a[i].x,y=a[i].y,z=a[i].z;
        if(z==1)
        un(mp[x],mp[y]);
    }

     for(int i=1;i<=n;i++)
    {
        int x=a[i].x,y=a[i].y,z=a[i].z;
        if(z==0)
        {
            if(issame(mp[x],mp[y]))
            return false;
        }
    }
    return true;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        if(solve())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}