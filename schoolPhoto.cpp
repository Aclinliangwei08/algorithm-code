#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,s,m;
const int N=1010,M=N*N;

struct node{
    LL h;
    int id;
}a[M];
int cnt[N];
bool cmp(node& x,node& y)
{
    return x.h<y.h;
}

int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            m++;
            cin>>a[m].h;
            a[m].id=i;
        }
    }
    sort(a+1,a+1+m,cmp);
    LL ret=1e18;
    for(int l=1,r=1,kind=0;r<=m;r++)
    {
        cnt[a[r].id]++;
        if(cnt[a[r].id]==1)
        kind++;
        while(kind==n)
        {
            ret=min(ret,a[r].h-a[l].h);
            cnt[a[l].id]--;
            if(cnt[a[l].id]==0)
            kind--;
            l++;
        }
    }
    cout<<ret<<endl;
    return 0;
}