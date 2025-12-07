#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N],b[N];
int n,m;
int disc[N*4];
int w[N*4];
bool st[N*4];
unordered_map<int,int> id;
int main()
{
    cin>>n>>m;
    int pos=0;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i];
        disc[++pos]=a[i];
        disc[++pos]=a[i]+1;
        disc[++pos]=b[i]+1;
        disc[++pos]=b[i];
    }

    // 离散化
    sort(disc+1,disc+1+pos);
    int cnt=0;
    for(int i=1;i<=pos;i++)
    {
        int x=disc[i];
        if(id.count(x))
        continue;
        cnt++;
        id[x]=cnt;
    }

    //根据离散化数组，模拟贴海报过程
    for(int i=1;i<=m;i++)
    {
        int l=id[a[i]],r=id[b[i]];
        for(int j=l;j<=r;j++)
        {
            w[j]=i;
        }
    }

    // 统计结果
    int ans=0;
    for(int i=1;i<=cnt;i++)
    {
        int x=w[i];
        if(!x || st[x])
        continue;
        ans++;
        st[x]=true;
    }
    cout<<ans<<endl;
    return 0;
}