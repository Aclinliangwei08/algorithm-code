#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a,b,p;
LL qpow(LL a,LL b,LL p)
{
    LL ans=0;
    while(b)
    {
        if(b&1)
        ans=(ans+a)%p;
        a=(a+a)%p;
        b>>=1;
    }
    return ans;
}
int main()
{
    cin>>a>>b>>p;
    cout<<qpow(a,b,p);
    return 0;
}