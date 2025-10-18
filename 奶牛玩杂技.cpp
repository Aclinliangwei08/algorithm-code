#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
typedef long long LL;
struct ndd {
    LL w;
    LL s;
} arr[N];
bool cmp(ndd a,ndd b)
{
    return a.w+a.s<b.w+b.s; //贪心策略，体重+力量越大，越待在下面
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&arr[i].w,&arr[i].s);
    }
    sort(arr,arr+n,cmp);
    LL weight=0;
    LL ans=LLONG_MIN;
    for(int i=0;i<n;i++)//从上到下遍历，找出答案
    {
        ans=max(ans,weight-arr[i].s);
        weight+=arr[i].w;
    }
    cout<<ans<<endl;
    return 0;
}