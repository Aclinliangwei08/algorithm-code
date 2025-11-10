#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;
typedef long long LL;
struct node{
    LL l,r;
}a[N];

bool cmp(node &x,node &y)
{
    return x.l<y.l;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
    }
    sort(a+1,a+1+n,cmp);

    int ret=1;
    LL r=a[1].r;

    for(int i=2;i<=n;i++)
    {
        if(a[i].l<r)
        {
            r=min(r,a[i].r);
        }else{
            ret++;
            r=a[i].r;
        }
    }

    cout<<ret<<endl;
    return 0;
}