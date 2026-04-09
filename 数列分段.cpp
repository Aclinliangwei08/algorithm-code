#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
typedef long long LL;
LL s[N];
LL n,m;

LL calc(LL z)
{
    LL ret=0;
    LL sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=s[i];
        if(sum>z)
        {
            ret++;
            sum=s[i];
        }
    }
    return ret+1;
}
int main()
{
    cin>>n>>m;
    LL l=0,r=0;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        l=max(l,s[i]);
        r+=s[i];
    }
    while(l<r)
    {
        LL mid=(l+r)/2;
        if(calc(mid)<=m)
        r=mid;
        else
        l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}