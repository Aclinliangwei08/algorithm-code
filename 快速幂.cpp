#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a,b,p;
LL qpow(LL a,LL b,LL p)
{
    int ret=1;//最终结果
    while(b)
    {
        if(b&1)
        ret=ret*a%p;
        a=a*a%p;
        b>>=1;
    }
    return ret;
}
int main()
{
    cin>>a>>b>>p;
    printf("%lld^%lld mod %lld=%lld",a,b,p,qpow(a,b,p));
    return 0;
}