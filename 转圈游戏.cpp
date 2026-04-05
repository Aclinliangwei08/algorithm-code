#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,m,k,x;
LL qpow(LL q,LL p,LL z)
{
    LL ret=1;
    while(p)
    {
        if(p&1)
        {
            ret=ret*q%z;
        }
        p>>=1;
        q=q*q%z;
    }
    return ret;
}
int main()
{
    cin>>n>>m>>k>>x;
    cout<<(x+qpow(10,k,n)*m)%n<<endl;
    return 0;
}