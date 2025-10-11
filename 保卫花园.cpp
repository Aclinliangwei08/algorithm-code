#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
typedef long long LL;
LL n;
struct ndd {
    LL t;
    LL d;
} arr[N];
bool cmp(ndd a,ndd b)
{
    return a.t*b.d<a.d*b.t;
}
int main()
{
    scanf("%lld",&n);
    LL sum=0;
    for(LL i=0;i<n;i++)
    {
        scanf("%lld %lld",&arr[i].t,&arr[i].d);
        sum+=arr[i].d;
    }
    sort(arr,arr+n,cmp);
    LL ans=0;
    for(LL i=0;i<n;i++)
    {
        sum-=arr[i].d;
        ans+=sum*(arr[i].t*2LL);
    }
    cout<<ans<<endl;
    return 0;
}

